using System.Collections.Generic;
using UnityEngine;

[DisallowMultipleComponent]
[RequireComponent(typeof(Rigidbody))]
public sealed class MonsterThreat : MonoBehaviour
{
    readonly List<Material> explosionMaterials = new List<Material>();
    Rigidbody body;
    Animator animator;
    Vector3 startPosition;
    Vector3 baseScale;
    AnimalCollectible target;
    int monsterIndex;
    int biteCapacity;
    int bites;
    float elapsed;
    float entryDelay;
    float moveSpeed;
    float targetRefresh;
    float biteCooldown;
    float explosionTime;
    bool failed;
    bool exploding;
    bool shieldTriggered;

    public int Bites => bites;
    public int BiteCapacity => biteCapacity;

    public void Configure(int index, float delayedEntry, float speed, int capacity)
    {
        monsterIndex = index;
        entryDelay = delayedEntry;
        moveSpeed = Mathf.Clamp(speed, 0.45f, 0.65f); // Slow menacing pace
        biteCapacity = Mathf.Max(12, capacity);
        startPosition = transform.position;
        baseScale = transform.localScale;
        transform.rotation = Quaternion.Euler(0f, 180f, 0f);

        body = GetComponent<Rigidbody>();
        body.isKinematic = true;
        body.useGravity = false;
        body.interpolation = RigidbodyInterpolation.Interpolate;
        body.collisionDetectionMode = CollisionDetectionMode.ContinuousSpeculative;

        foreach (var behaviour in GetComponentsInChildren<MonoBehaviour>(true))
            if (behaviour != this) behaviour.enabled = false;

        animator = GetComponentInChildren<Animator>(true);
        if (animator)
        {
            animator.applyRootMotion = false;
            animator.enabled = true;
        }

        foreach (var collider in GetComponentsInChildren<Collider>(true)) collider.enabled = false;
        foreach (var renderer in GetComponentsInChildren<Renderer>(true))
        {
            renderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
            renderer.receiveShadows = false;
        }
    }

    public void TriggerFailure() => failed = true;

    public void Explode()
    {
        if (exploding) return;
        exploding = true;
        explosionTime = 0f;
        target = null;
        explosionMaterials.Clear();
        foreach (var renderer in GetComponentsInChildren<Renderer>(true))
            explosionMaterials.AddRange(renderer.materials);
    }

    void Update()
    {
        if (exploding)
        {
            UpdateExplosion();
            return;
        }
        if (!RescueGameBootstrap.Instance) return;
        if (!RescueGameBootstrap.Instance.IsPlaying && !failed) return;

        elapsed += Time.deltaTime;
        if (biteCooldown > 0f) biteCooldown -= Time.deltaTime;

        if (elapsed < entryDelay) return;

        // Trigger PUBG shield as soon as monster enters
        if (!shieldTriggered)
        {
            shieldTriggered = true;
            if (ZoneShieldCircle.Instance) ZoneShieldCircle.Instance.ActivateShield(30f);
        }

        if (failed) return;

        targetRefresh -= Time.deltaTime;
        if (targetRefresh <= 0f || !target || !target.CanMonsterBeEaten)
        {
            targetRefresh = 0.5f;
            target = FindClosestAnimal();
        }
    }

    void FixedUpdate()
    {
        if (exploding || !RescueGameBootstrap.Instance) return;
        if (!RescueGameBootstrap.Instance.IsPlaying && !failed) return;

        if (elapsed < entryDelay)
        {
            float side = Mathf.Sin(elapsed * 0.8f + monsterIndex * 2f) * 0.35f;
            body.MovePosition(startPosition + new Vector3(side, Mathf.Sin(elapsed * 2f) * 0.04f, 0f));
            return;
        }
        if (failed)
        {
            body.MovePosition(body.position + Vector3.back * moveSpeed * 1.5f * Time.fixedDeltaTime);
            return;
        }

        Vector3 destination;
        if (target && target.CanMonsterBeEaten)
        {
            destination = target.CapturePoint;
        }
        else
        {
            // If all animals are shielded, circle menacingly around the shield perimeter
            float angle = Time.time * 0.25f + monsterIndex * Mathf.PI;
            float r = ZoneShieldCircle.Instance ? ZoneShieldCircle.Instance.ShieldRadius + 1.6f : 10.5f;
            destination = new Vector3(Mathf.Cos(angle) * r, body.position.y, Mathf.Sin(angle) * r);
        }

        destination.y = body.position.y;
        Vector3 direction = destination - body.position;
        direction.y = 0f;
        if (direction.sqrMagnitude > 0.01f)
        {
            Vector3 nextPos = body.position + direction.normalized * moveSpeed * Time.fixedDeltaTime;

            // Enforce PUBG Shield barrier repulsion
            if (ZoneShieldCircle.Instance && ZoneShieldCircle.Instance.IsActive)
            {
                nextPos = ZoneShieldCircle.Instance.RepelMonster(nextPos, 1.4f);
            }

            body.MovePosition(nextPos);
            body.MoveRotation(Quaternion.Slerp(body.rotation, Quaternion.LookRotation(direction, Vector3.up), Time.fixedDeltaTime * 4f));
        }

        float pulse = 1f + Mathf.Sin(Time.time * 4f + monsterIndex) * 0.02f;
        transform.localScale = baseScale * pulse * (1f + bites * 0.05f);

        if (target && target.CanMonsterBeEaten && biteCooldown <= 0f && direction.sqrMagnitude < 1.3f * 1.3f)
        {
            BiteTarget();
        }
    }

    AnimalCollectible FindClosestAnimal()
    {
        AnimalCollectible closest = null;
        float bestDistance = float.MaxValue;
        foreach (var animal in RescueGameBootstrap.Instance.Animals)
        {
            if (!animal || !animal.CanMonsterBeEaten) continue;
            float distance = (animal.CapturePoint - body.position).sqrMagnitude;
            if (distance >= bestDistance) continue;
            bestDistance = distance;
            closest = animal;
        }
        return closest;
    }

    void BiteTarget()
    {
        if (!target || !target.CanMonsterBeEaten) return;
        bites++;
        biteCooldown = 3.5f; // Generous cooldown between bites
        target.MonsterBite(RescueGameBootstrap.Instance.GetMonsterRespawnPoint());
        RescueGameBootstrap.Instance.RegisterMonsterBite(this, bites, biteCapacity);
        target = null;
    }

    void UpdateExplosion()
    {
        explosionTime += Time.unscaledDeltaTime;
        float t = Mathf.Clamp01(explosionTime / 0.72f);
        float scale = 1f + Mathf.Sin(t * Mathf.PI) * 2.8f;
        transform.localScale = baseScale * scale;
        transform.Rotate(Vector3.up, 520f * Time.unscaledDeltaTime, Space.World);
        Color color = Color.Lerp(Color.white, new Color(1f, 0.12f, 0.03f), t);
        for (int i = 0; i < explosionMaterials.Count; i++)
        {
            var material = explosionMaterials[i];
            if (!material) continue;
            if (material.HasProperty("_BaseColor")) material.SetColor("_BaseColor", color);
            else if (material.HasProperty("_Color")) material.color = color;
        }
        if (t >= 1f) gameObject.SetActive(false);
    }
}
