using UnityEngine;

[DisallowMultipleComponent]
[RequireComponent(typeof(Rigidbody), typeof(CapsuleCollider))]
public sealed class AnimalCollectible : MonoBehaviour
{
    public string AnimalType { get; private set; }
    public int RequiredHoleStage { get; private set; }
    public bool IsCapturing { get; private set; }
    public bool IsRescued { get; private set; }
    public float FootprintRadius { get; private set; }
    public Vector3 CapturePoint => transform.TransformPoint(capturePointLocal);
    public Collider PhysicsCollider => physicsCollider;

    Rigidbody body;
    CapsuleCollider physicsCollider;
    Transform catcher;
    Animator animator;
    float floorY;
    float captureTime;
    float monsterProtection;
    float wanderSpeed;
    float originalWanderSpeed;
    float wanderWait;
    Vector2 xBounds;
    Vector2 zBounds;
    Vector3 wanderTarget;
    Vector3 uprightScale;
    Vector3 capturePointLocal;

    public void Configure(string animalType, float mass, int requiredHoleStage, float surfaceY, Vector2 allowedX, Vector2 allowedZ, float movementSpeed, bool animateVisual)
    {
        AnimalType = animalType;
        RequiredHoleStage = Mathf.Clamp(requiredHoleStage, 1, 5);
        floorY = surfaceY;
        xBounds = allowedX;
        zBounds = allowedZ;
        wanderSpeed = originalWanderSpeed = movementSpeed;
        uprightScale = transform.localScale;
        transform.rotation = Quaternion.Euler(0f, Random.Range(0f, 360f), 0f);

        foreach (var behaviour in GetComponentsInChildren<MonoBehaviour>(true))
        {
            if (behaviour != this && (behaviour.GetType().Name == "CreatureMover" || behaviour.GetType().Name == "MovePlayerInput"))
                behaviour.enabled = false;
        }
        foreach (var character in GetComponentsInChildren<CharacterController>(true)) character.enabled = false;
        foreach (var collider in GetComponentsInChildren<Collider>(true))
            if (collider.gameObject != gameObject) collider.enabled = false;

        var bounds = GetWorldBounds();
        capturePointLocal = transform.InverseTransformPoint(new Vector3(bounds.center.x, transform.position.y, bounds.center.z));
        FootprintRadius = Mathf.Max(0.12f, Mathf.Max(bounds.extents.x, bounds.extents.z) * 0.72f);
        PreparePhysics(mass, bounds);
        SetupAnimation();
        ChooseWanderTarget();
    }

    void PreparePhysics(float mass, Bounds visualBounds)
    {
        body = GetComponent<Rigidbody>();
        body.mass = Mathf.Max(0.1f, mass);
        body.useGravity = false;
        body.isKinematic = true;
        body.interpolation = RigidbodyInterpolation.Interpolate;
        body.collisionDetectionMode = CollisionDetectionMode.ContinuousSpeculative;
        body.constraints = RigidbodyConstraints.FreezeRotationX | RigidbodyConstraints.FreezeRotationZ;

        physicsCollider = GetComponent<CapsuleCollider>();
        physicsCollider.direction = 1;
        physicsCollider.center = transform.InverseTransformPoint(visualBounds.center);
        physicsCollider.radius = Mathf.Max(0.12f, FootprintRadius * 0.65f);
        physicsCollider.height = Mathf.Max(physicsCollider.radius * 2f, visualBounds.size.y * 0.85f);
        physicsCollider.isTrigger = true;
        physicsCollider.enabled = true;
    }

    Bounds GetWorldBounds()
    {
        var renderers = GetComponentsInChildren<Renderer>(true);
        if (renderers.Length == 0) return new Bounds(transform.position + Vector3.up * 0.5f, Vector3.one * 0.5f);
        var result = renderers[0].bounds;
        for (int i = 1; i < renderers.Length; i++) result.Encapsulate(renderers[i].bounds);
        return result;
    }

    void SetupAnimation()
    {
        animator = GetComponentInChildren<Animator>(true);
        if (animator)
        {
            animator.enabled = true;
            animator.applyRootMotion = false;
        }

        foreach (var renderer in GetComponentsInChildren<Renderer>(true))
        {
            renderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
            renderer.receiveShadows = false;
        }
    }

    public bool FitsInside(float visibleHoleRadius)
    {
        return !IsCapturing && !IsRescued && FootprintRadius <= visibleHoleRadius * 1.15f;
    }

    public bool CanBeCaptured(int holeStage, float visibleHoleRadius) => FitsInside(visibleHoleRadius);

    public bool CanMonsterBeEaten
    {
        get
        {
            if (IsCapturing || IsRescued || monsterProtection > 0f) return false;
            if (ZoneShieldCircle.Instance != null && ZoneShieldCircle.Instance.IsActive && ZoneShieldCircle.Instance.IsInsideShield(transform.position))
            {
                return false;
            }
            return true;
        }
    }

    public void BeginCapture(Transform catcherTarget, float boardY)
    {
        if (IsCapturing || IsRescued) return;
        IsCapturing = true;
        catcher = catcherTarget;
        floorY = boardY;
        captureTime = 0f;
        wanderSpeed = 0f;
        body.isKinematic = false;
        body.useGravity = false; // We handle custom suction gravity
        body.constraints = RigidbodyConstraints.None;
        body.linearVelocity = Vector3.zero;
        body.angularVelocity = Vector3.zero;
        body.AddTorque(new Vector3(Random.Range(-3f, 3f), Random.Range(-2f, 2f), Random.Range(-3f, 3f)), ForceMode.VelocityChange);

        if (animator) animator.enabled = false;
    }

    void Update()
    {
        if (monsterProtection > 0f) monsterProtection -= Time.deltaTime;
        if (!IsCapturing || IsRescued) return;

        float squeeze = Mathf.Clamp01(captureTime / 0.65f);
        transform.localScale = Vector3.Lerp(uprightScale, uprightScale * 0.08f, squeeze);
    }

    void FixedUpdate()
    {
        if (IsRescued) return;
        if (IsCapturing) UpdateCapturePhysics();
        else UpdateWanderPhysics();
    }

    void UpdateWanderPhysics()
    {
        if (!RescueGameBootstrap.Instance || !RescueGameBootstrap.Instance.IsPlaying || wanderSpeed <= 0f)
        {
            if (animator) animator.SetFloat("Vert", 0f);
            return;
        }

        float deltaTime = Time.fixedDeltaTime;
        if (wanderWait > 0f)
        {
            wanderWait -= deltaTime;
            if (animator) animator.SetFloat("Vert", 0f);
            return;
        }

        if (animator) animator.SetFloat("Vert", 0.75f);

        Vector3 flatPosition = body.position;
        flatPosition.y = floorY + 0.01f;
        Vector3 direction = wanderTarget - flatPosition;
        direction.y = 0f;
        if (direction.sqrMagnitude < 0.12f)
        {
            wanderWait = Random.Range(0.8f, 2.2f);
            ChooseWanderTarget();
            return;
        }

        direction.Normalize();
        body.MovePosition(flatPosition + direction * wanderSpeed * deltaTime);
        body.MoveRotation(Quaternion.Slerp(body.rotation, Quaternion.LookRotation(direction, Vector3.up), deltaTime * 5f));
    }

    void UpdateCapturePhysics()
    {
        if (!catcher || !body) return;
        captureTime += Time.fixedDeltaTime;

        Vector3 holeCenter = catcher.position;
        Vector3 toCenter = holeCenter - body.position;
        toCenter.y = 0f;
        float dist = toCenter.magnitude;

        // Inward suction towards center
        Vector3 pull = toCenter.normalized * Mathf.Clamp(14f / Mathf.Max(0.15f, dist), 5f, 30f);

        // Downward drop into hole void
        Vector3 down = Vector3.down * (10f + captureTime * 22f);

        body.AddForce(pull + down, ForceMode.Acceleration);

        Vector3 vel = body.linearVelocity;
        vel.x *= 0.85f;
        vel.z *= 0.85f;
        body.linearVelocity = vel;

        if (body.position.y < floorY - 0.65f || (captureTime > 0.65f && dist < 0.35f))
        {
            Rescue();
        }
    }

    void ChooseWanderTarget()
    {
        wanderTarget = new Vector3(Random.Range(xBounds.x, xBounds.y), floorY + 0.01f, Random.Range(zBounds.x, zBounds.y));
    }

    public void MonsterBite(Vector3 respawnPoint)
    {
        if (!CanMonsterBeEaten) return;
        body.position = new Vector3(respawnPoint.x, floorY + 0.01f, respawnPoint.z);
        body.rotation = Quaternion.Euler(0f, Random.Range(0f, 360f), 0f);
        transform.localScale = uprightScale;
        monsterProtection = 3.5f;
        wanderSpeed = originalWanderSpeed;
        wanderWait = 0.6f;
        ChooseWanderTarget();
    }

    public void DebugRescueInstant()
    {
        if (!IsRescued) Rescue();
    }

    void Rescue()
    {
        if (IsRescued) return;
        IsRescued = true;
        IsCapturing = false;
        body.linearVelocity = Vector3.zero;
        body.angularVelocity = Vector3.zero;
        body.isKinematic = true;
        if (RescueGameBootstrap.Instance) RescueGameBootstrap.Instance.RegisterRescue(this);
        gameObject.SetActive(false);
    }
}
