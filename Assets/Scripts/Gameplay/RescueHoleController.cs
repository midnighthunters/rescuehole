using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem;

[DisallowMultipleComponent]
[RequireComponent(typeof(Rigidbody))]
public sealed class RescueHoleController : MonoBehaviour
{
    static readonly float[] RadiusByStage = { 1.05f, 1.35f, 1.65f, 1.95f, 2.3f };

    [SerializeField] float animalScanInterval = 0.04f;
    [SerializeField] Vector2 xBounds = new Vector2(-11f, 11f);
    [SerializeField] Vector2 zBounds = new Vector2(-8.2f, 8.2f);

    readonly Collider[] overlapResults = new Collider[128];
    readonly HashSet<AnimalCollectible> scannedAnimals = new HashSet<AnimalCollectible>();

    Camera gameplayCamera;
    Rigidbody body;
    float boardY;
    bool dragging;
    Vector3 desiredPosition;
    Vector3 dragOffset;
    float boostTimer;
    float scanTimer;

    // Procedural Visuals
    GameObject holeVisualRoot;
    GameObject voidDiscObject;
    GameObject rimRingObject;
    GameObject innerCoreObject;
    Material voidMaterial;
    Material rimMaterial;
    Material coreMaterial;
    float currentRadius = 1.05f;
    float targetRadius = 1.05f;

    public int GrowthStage { get; private set; } = 1;
    public float CurrentCaptureRadius => currentRadius * (boostTimer > 0f ? 1.4f : 1f);

    public void Configure(Camera camera, float surfaceY)
    {
        gameplayCamera = camera;
        body = GetComponent<Rigidbody>();
        body.isKinematic = true;
        body.useGravity = false;
        body.interpolation = RigidbodyInterpolation.Interpolate;
        body.collisionDetectionMode = CollisionDetectionMode.ContinuousSpeculative;
        boardY = surfaceY;

        Vector3 startPos = transform.position;
        startPos.y = boardY + 0.012f;
        transform.position = startPos;
        desiredPosition = startPos;

        BuildHoleVisuals();
        SetGrowthStage(1, true);
    }

    public void SetGrowthStage(int stage, bool immediate = false)
    {
        GrowthStage = Mathf.Clamp(stage, 1, RadiusByStage.Length);
        targetRadius = RadiusByStage[GrowthStage - 1];
        if (immediate)
        {
            currentRadius = targetRadius;
            UpdateMeshRadii(currentRadius);
        }
    }

    public void ActivateMagnet(float seconds) => boostTimer = Mathf.Max(boostTimer, seconds);

    void Update()
    {
        if (Mathf.Abs(currentRadius - targetRadius) > 0.005f)
        {
            currentRadius = Mathf.Lerp(currentRadius, targetRadius, Time.deltaTime * 6f);
            UpdateMeshRadii(currentRadius);
        }

        if (boostTimer > 0f) boostTimer -= Time.unscaledDeltaTime;

        // Dynamic rim energy pulse
        if (rimMaterial)
        {
            float pulse = 0.85f + Mathf.PingPong(Time.time * 3.5f, 0.3f);
            Color rimCol = new Color(0f, 0.9f, 1f) * pulse;
            if (boostTimer > 0f) rimCol = new Color(1f, 0.82f, 0.1f) * pulse * 1.35f;
            rimMaterial.SetColor("_BaseColor", rimCol);
        }

        if (!RescueGameBootstrap.Instance || !RescueGameBootstrap.Instance.IsPlaying)
        {
            dragging = false;
            return;
        }

        HandlePointer();
    }

    void FixedUpdate()
    {
        if (!RescueGameBootstrap.Instance || !RescueGameBootstrap.Instance.IsPlaying) return;

        // Snappy direct follow: tightly locks to desired position
        Vector3 next = Vector3.Lerp(body.position, desiredPosition, 0.45f);
        next.y = boardY + 0.012f;
        body.MovePosition(next);

        scanTimer -= Time.fixedDeltaTime;
        if (scanTimer <= 0f)
        {
            scanTimer = animalScanInterval;
            ScanForAnimals();
        }
    }

    void HandlePointer()
    {
        var pointer = Pointer.current;
        if (pointer == null) return;
        Vector2 currentScreenPosition = pointer.position.ReadValue();

        if (pointer.press.wasPressedThisFrame)
        {
            if (currentScreenPosition.y > Screen.height * 0.86f) return;
            if (EventSystem.current && EventSystem.current.IsPointerOverGameObject()) return;

            if (TryProject(currentScreenPosition, out var hitWorld))
            {
                dragging = true;
                dragOffset = desiredPosition - hitWorld;
                dragOffset.y = 0f;
                // If clicked far, center gently
                if (dragOffset.magnitude > 2.0f)
                {
                    dragOffset = dragOffset.normalized * 2.0f;
                }
            }
        }

        if (pointer.press.wasReleasedThisFrame) dragging = false;
        if (!dragging || !pointer.press.isPressed) return;

        if (TryProject(currentScreenPosition, out var currentWorld))
        {
            desiredPosition = Clamp(currentWorld + dragOffset);
        }
    }

    bool TryProject(Vector2 screenPosition, out Vector3 world)
    {
        world = transform.position;
        if (!gameplayCamera) return false;
        var plane = new Plane(Vector3.up, new Vector3(0f, boardY, 0f));
        var ray = gameplayCamera.ScreenPointToRay(screenPosition);
        if (!plane.Raycast(ray, out var enter)) return false;
        world = ray.GetPoint(enter);
        return true;
    }

    Vector3 Clamp(Vector3 p)
    {
        float margin = currentRadius * 0.8f;
        p.x = Mathf.Clamp(p.x, xBounds.x + margin, xBounds.y - margin);
        p.z = Mathf.Clamp(p.z, zBounds.x + margin, zBounds.y - margin);
        p.y = boardY + 0.012f;
        return p;
    }

    void ScanForAnimals()
    {
        float captureRadius = CurrentCaptureRadius;
        Vector3 queryCenter = body.position + Vector3.up * 0.4f;
        int hitCount = Physics.OverlapSphereNonAlloc(queryCenter, captureRadius + 0.4f, overlapResults, ~0, QueryTriggerInteraction.Collide);
        scannedAnimals.Clear();
        Vector2 holeCenter = new Vector2(body.position.x, body.position.z);

        for (int i = 0; i < hitCount; i++)
        {
            var hit = overlapResults[i];
            if (!hit) continue;
            var animal = hit.GetComponentInParent<AnimalCollectible>();
            if (!animal || !scannedAnimals.Add(animal) || !animal.CanBeCaptured(GrowthStage, captureRadius)) continue;

            Vector3 point = animal.CapturePoint;
            float centerDistance = Vector2.Distance(holeCenter, new Vector2(point.x, point.z));
            float requiredOverlap = Mathf.Max(0.2f, captureRadius - animal.FootprintRadius * 0.2f);
            if (centerDistance <= requiredOverlap)
            {
                animal.BeginCapture(transform, boardY);
            }
        }
    }

    void BuildHoleVisuals()
    {
        holeVisualRoot = new GameObject("Black Hole Visuals");
        holeVisualRoot.transform.SetParent(transform, false);
        holeVisualRoot.transform.localPosition = Vector3.zero;

        var unlitShader = Shader.Find("Universal Render Pipeline/Unlit");
        if (!unlitShader) unlitShader = Shader.Find("Sprites/Default");

        // 1. Deep Black Void Disc (Flush on grass at y = 0.012f)
        voidDiscObject = new GameObject("Void Disc");
        voidDiscObject.transform.SetParent(holeVisualRoot.transform, false);
        voidDiscObject.transform.localPosition = Vector3.zero;
        var voidFilter = voidDiscObject.AddComponent<MeshFilter>();
        var voidRenderer = voidDiscObject.AddComponent<MeshRenderer>();

        voidMaterial = new Material(unlitShader);
        voidMaterial.name = "Hole Void Mat";
        voidMaterial.SetColor("_BaseColor", new Color(0.04f, 0.04f, 0.06f, 1f));
        voidMaterial.SetInt("_Cull", (int)UnityEngine.Rendering.CullMode.Off);
        voidRenderer.sharedMaterial = voidMaterial;
        voidRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
        voidRenderer.receiveShadows = false;

        // 2. Inner Abyss Core (Deep pitch black center at y = 0.014f)
        innerCoreObject = new GameObject("Abyss Core");
        innerCoreObject.transform.SetParent(holeVisualRoot.transform, false);
        innerCoreObject.transform.localPosition = new Vector3(0f, 0.002f, 0f);
        var coreFilter = innerCoreObject.AddComponent<MeshFilter>();
        var coreRenderer = innerCoreObject.AddComponent<MeshRenderer>();

        coreMaterial = new Material(unlitShader);
        coreMaterial.name = "Hole Core Mat";
        coreMaterial.SetColor("_BaseColor", new Color(0.005f, 0.005f, 0.01f, 1f));
        coreMaterial.SetInt("_Cull", (int)UnityEngine.Rendering.CullMode.Off);
        coreRenderer.sharedMaterial = coreMaterial;
        coreRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
        coreRenderer.receiveShadows = false;

        // 3. Glowing Luminous Rim Ring (at y = 0.016f)
        rimRingObject = new GameObject("Luminous Rim");
        rimRingObject.transform.SetParent(holeVisualRoot.transform, false);
        rimRingObject.transform.localPosition = new Vector3(0f, 0.004f, 0f);
        var rimFilter = rimRingObject.AddComponent<MeshFilter>();
        var rimRenderer = rimRingObject.AddComponent<MeshRenderer>();

        rimMaterial = new Material(unlitShader);
        rimMaterial.name = "Hole Rim Mat";
        rimMaterial.SetColor("_BaseColor", new Color(0f, 0.92f, 1f, 1f));
        rimMaterial.SetInt("_Cull", (int)UnityEngine.Rendering.CullMode.Off);
        rimRenderer.sharedMaterial = rimMaterial;
        rimRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
        rimRenderer.receiveShadows = false;

        UpdateMeshRadii(currentRadius);
    }

    void UpdateMeshRadii(float radius)
    {
        const int segments = 48;
        float angleStep = Mathf.PI * 2f / segments;

        // 1. Void Disc Mesh (Upward normal: 0, next, i + 1)
        if (voidDiscObject)
        {
            var filter = voidDiscObject.GetComponent<MeshFilter>();
            var mesh = filter.sharedMesh;
            if (!mesh) mesh = new Mesh { name = "VoidDiscMesh" };

            Vector3[] verts = new Vector3[segments + 1];
            int[] tris = new int[segments * 6]; // double-sided
            verts[0] = Vector3.zero;

            for (int i = 0; i < segments; i++)
            {
                float angle = i * angleStep;
                verts[i + 1] = new Vector3(Mathf.Cos(angle) * radius, 0f, Mathf.Sin(angle) * radius);
            }

            int triIdx = 0;
            for (int i = 0; i < segments; i++)
            {
                int next = (i + 1) % segments + 1;
                // Top face (normal +Y)
                tris[triIdx++] = 0;
                tris[triIdx++] = next;
                tris[triIdx++] = i + 1;
                // Bottom face
                tris[triIdx++] = 0;
                tris[triIdx++] = i + 1;
                tris[triIdx++] = next;
            }

            mesh.vertices = verts;
            mesh.triangles = tris;
            mesh.RecalculateNormals();
            filter.sharedMesh = mesh;
        }

        // 2. Inner Abyss Core Mesh (radius * 0.82f)
        if (innerCoreObject)
        {
            var filter = innerCoreObject.GetComponent<MeshFilter>();
            var mesh = filter.sharedMesh;
            if (!mesh) mesh = new Mesh { name = "AbyssCoreMesh" };

            float coreR = radius * 0.82f;
            Vector3[] verts = new Vector3[segments + 1];
            int[] tris = new int[segments * 6];
            verts[0] = Vector3.zero;

            for (int i = 0; i < segments; i++)
            {
                float angle = i * angleStep;
                verts[i + 1] = new Vector3(Mathf.Cos(angle) * coreR, 0f, Mathf.Sin(angle) * coreR);
            }

            int triIdx = 0;
            for (int i = 0; i < segments; i++)
            {
                int next = (i + 1) % segments + 1;
                tris[triIdx++] = 0;
                tris[triIdx++] = next;
                tris[triIdx++] = i + 1;
                tris[triIdx++] = 0;
                tris[triIdx++] = i + 1;
                tris[triIdx++] = next;
            }

            mesh.vertices = verts;
            mesh.triangles = tris;
            mesh.RecalculateNormals();
            filter.sharedMesh = mesh;
        }

        // 3. Luminous Rim Ring Mesh
        if (rimRingObject)
        {
            var filter = rimRingObject.GetComponent<MeshFilter>();
            var mesh = filter.sharedMesh;
            if (!mesh) mesh = new Mesh { name = "RimRingMesh" };

            float rInner = radius;
            float rOuter = radius + 0.18f;
            Vector3[] verts = new Vector3[segments * 2];
            int[] tris = new int[segments * 12]; // double-sided

            for (int i = 0; i < segments; i++)
            {
                float angle = i * angleStep;
                float cos = Mathf.Cos(angle);
                float sin = Mathf.Sin(angle);
                verts[i * 2] = new Vector3(cos * rInner, 0f, sin * rInner);
                verts[i * 2 + 1] = new Vector3(cos * rOuter, 0f, sin * rOuter);
            }

            int triIdx = 0;
            for (int i = 0; i < segments; i++)
            {
                int next = (i + 1) % segments;
                int b0 = i * 2;
                int t0 = i * 2 + 1;
                int b1 = next * 2;
                int t1 = next * 2 + 1;

                // Top (normal +Y)
                tris[triIdx++] = b0;
                tris[triIdx++] = t1;
                tris[triIdx++] = t0;
                tris[triIdx++] = b0;
                tris[triIdx++] = b1;
                tris[triIdx++] = t1;

                // Bottom
                tris[triIdx++] = b0;
                tris[triIdx++] = t0;
                tris[triIdx++] = t1;
                tris[triIdx++] = b0;
                tris[triIdx++] = t1;
                tris[triIdx++] = b1;
            }

            mesh.vertices = verts;
            mesh.triangles = tris;
            mesh.RecalculateNormals();
            filter.sharedMesh = mesh;
        }
    }

    public void DebugMoveTo(Vector3 worldPosition)
    {
        desiredPosition = Clamp(worldPosition);
        body.position = desiredPosition;
        transform.position = desiredPosition;
    }

    public bool DebugCaptureFirstFit()
    {
        if (!RescueGameBootstrap.Instance) return false;
        foreach (var animal in RescueGameBootstrap.Instance.Animals)
        {
            if (!animal || !animal.FitsInside(CurrentCaptureRadius)) continue;
            DebugMoveTo(animal.CapturePoint);
            animal.BeginCapture(transform, boardY);
            return true;
        }
        return false;
    }
}
