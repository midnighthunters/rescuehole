using UnityEngine;

[DisallowMultipleComponent]
public sealed class ZoneShieldCircle : MonoBehaviour
{
    public static ZoneShieldCircle Instance { get; private set; }

    [SerializeField] float shieldRadius = 9.2f;
    [SerializeField] float wallHeight = 4.8f;
    [SerializeField] Color shieldColor = new Color(0.12f, 0.68f, 1f, 0.32f);
    [SerializeField] Color rimColor = new Color(0.2f, 0.9f, 1f, 0.95f);

    float activeTimer = 30f;
    bool isActivated = false;
    bool isDeactivated = false;
    float fadeOutTimer = 0f;

    GameObject wallObject;
    GameObject rimObject;
    Material wallMaterial;
    Material rimMaterial;
    AudioSource audioSource;
    AudioClip shieldHumClip;
    AudioClip shieldBreakClip;

    public bool IsArmed => !isDeactivated;
    public bool IsActive => isActivated && !isDeactivated;
    public float RemainingTime => Mathf.Max(0f, activeTimer);
    public float TotalDuration => 30f;
    public float ShieldRadius => shieldRadius;
    public Vector3 Center => transform.position;

    void Awake()
    {
        if (Instance && Instance != this) { Destroy(gameObject); return; }
        Instance = this;
        BuildShieldMesh();
        BuildAudio();
    }

    void OnDestroy()
    {
        if (Instance == this) Instance = null;
    }

    public void ActivateShield(float duration = 30f)
    {
        if (isActivated) return;
        isActivated = true;
        isDeactivated = false;
        activeTimer = duration;

        if (wallObject) wallObject.SetActive(true);
        if (rimObject) rimObject.SetActive(true);

        if (audioSource && shieldHumClip)
        {
            audioSource.clip = shieldHumClip;
            audioSource.loop = true;
            audioSource.Play();
        }
        Debug.Log("[ZoneShieldCircle] PUBG Shield Zone activated for " + duration + "s!");
    }

    public bool IsInsideShield(Vector3 worldPosition)
    {
        Vector2 pos = new Vector2(worldPosition.x - transform.position.x, worldPosition.z - transform.position.z);
        return pos.sqrMagnitude <= shieldRadius * shieldRadius;
    }

    public Vector3 RepelMonster(Vector3 monsterPos, float monsterRadius = 1.2f)
    {
        if (!IsArmed) return monsterPos;

        Vector2 diff = new Vector2(monsterPos.x - transform.position.x, monsterPos.z - transform.position.z);
        float minDistance = shieldRadius + monsterRadius;
        if (diff.sqrMagnitude < minDistance * minDistance)
        {
            if (diff.sqrMagnitude < 0.001f) diff = Vector2.right;
            diff = diff.normalized * minDistance;
            return new Vector3(transform.position.x + diff.x, monsterPos.y, transform.position.z + diff.y);
        }
        return monsterPos;
    }

    void Update()
    {
        if (isDeactivated)
        {
            if (fadeOutTimer > 0f)
            {
                fadeOutTimer -= Time.deltaTime;
                float t = Mathf.Clamp01(fadeOutTimer / 1.2f);
                if (wallMaterial)
                {
                    Color c = shieldColor;
                    c.a = t * 0.25f;
                    wallMaterial.SetColor("_BaseColor", c);
                }
                if (rimMaterial)
                {
                    Color rc = rimColor;
                    rc.a = t * 0.7f;
                    rimMaterial.SetColor("_BaseColor", rc);
                }
                if (fadeOutTimer <= 0f)
                {
                    if (wallObject) wallObject.SetActive(false);
                    if (rimObject) rimObject.SetActive(false);
                }
            }
            return;
        }

        // Active countdown
        if (isActivated)
        {
            activeTimer -= Time.deltaTime;

            // Pulse effect
            float pulse = 0.26f + Mathf.PingPong(Time.time * 2.2f, 0.16f);
            if (activeTimer <= 5f)
            {
                // Flashing urgency before expiration
                pulse = Mathf.PingPong(Time.time * 8f, 0.45f) + 0.1f;
            }

            if (wallMaterial)
            {
                Color c = shieldColor;
                c.a = pulse;
                wallMaterial.SetColor("_BaseColor", c);
            }
            if (rimMaterial)
            {
                Color rc = rimColor;
                rc.a = 0.75f + Mathf.PingPong(Time.time * 3f, 0.25f);
                rimMaterial.SetColor("_BaseColor", rc);
            }

            if (activeTimer <= 0f)
            {
                DeactivateShield();
            }
        }
        else
        {
            // Armed and ready before monster arrives
            float standbyPulse = 0.18f + Mathf.PingPong(Time.time * 1.5f, 0.08f);
            if (wallMaterial)
            {
                Color c = shieldColor;
                c.a = standbyPulse;
                wallMaterial.SetColor("_BaseColor", c);
            }
            if (rimMaterial)
            {
                Color rc = rimColor;
                rc.a = 0.7f + Mathf.PingPong(Time.time * 2f, 0.2f);
                rimMaterial.SetColor("_BaseColor", rc);
            }
        }
    }

    void DeactivateShield()
    {
        if (isDeactivated) return;
        isDeactivated = true;
        fadeOutTimer = 1.2f;

        if (audioSource)
        {
            audioSource.Stop();
            if (shieldBreakClip) audioSource.PlayOneShot(shieldBreakClip, 0.8f);
        }
        Debug.Log("[ZoneShieldCircle] PUBG Shield Zone deactivated!");
    }

    void BuildShieldMesh()
    {
        const int segments = 64;
        float angleStep = Mathf.PI * 2f / segments;

        // 1. Transparent Forcefield Wall Cylinder
        wallObject = new GameObject("Zone Shield Wall");
        wallObject.transform.SetParent(transform, false);
        var wallFilter = wallObject.AddComponent<MeshFilter>();
        var wallRenderer = wallObject.AddComponent<MeshRenderer>();

        Mesh wallMesh = new Mesh { name = "ShieldWallMesh" };
        Vector3[] wallVerts = new Vector3[segments * 2];
        Vector2[] wallUvs = new Vector2[segments * 2];
        int[] wallTris = new int[segments * 12]; // double-sided

        for (int i = 0; i < segments; i++)
        {
            float angle = i * angleStep;
            float x = Mathf.Cos(angle) * shieldRadius;
            float z = Mathf.Sin(angle) * shieldRadius;

            wallVerts[i * 2] = new Vector3(x, 0.04f, z);
            wallVerts[i * 2 + 1] = new Vector3(x, wallHeight, z);

            float u = (float)i / segments;
            wallUvs[i * 2] = new Vector2(u, 0f);
            wallUvs[i * 2 + 1] = new Vector2(u, 1f);
        }

        int triIndex = 0;
        for (int i = 0; i < segments; i++)
        {
            int next = (i + 1) % segments;
            int b0 = i * 2;
            int t0 = i * 2 + 1;
            int b1 = next * 2;
            int t1 = next * 2 + 1;

            // Front
            wallTris[triIndex++] = b0;
            wallTris[triIndex++] = t0;
            wallTris[triIndex++] = t1;
            wallTris[triIndex++] = b0;
            wallTris[triIndex++] = t1;
            wallTris[triIndex++] = b1;

            // Back
            wallTris[triIndex++] = t1;
            wallTris[triIndex++] = t0;
            wallTris[triIndex++] = b0;
            wallTris[triIndex++] = b1;
            wallTris[triIndex++] = t1;
            wallTris[triIndex++] = b0;
        }

        wallMesh.vertices = wallVerts;
        wallMesh.uv = wallUvs;
        wallMesh.triangles = wallTris;
        wallMesh.RecalculateNormals();
        wallFilter.sharedMesh = wallMesh;

        // Material for Wall
        var unlitShader = Shader.Find("Universal Render Pipeline/Unlit");
        if (!unlitShader) unlitShader = Shader.Find("Sprites/Default");
        wallMaterial = CreateTransparentMaterial(unlitShader, shieldColor);
        wallRenderer.sharedMaterial = wallMaterial;
        wallRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
        wallRenderer.receiveShadows = false;

        // 2. Glowing Boundary Ring on Ground
        rimObject = new GameObject("Zone Shield Rim");
        rimObject.transform.SetParent(transform, false);
        var rimFilter = rimObject.AddComponent<MeshFilter>();
        var rimRenderer = rimObject.AddComponent<MeshRenderer>();

        Mesh rimMesh = new Mesh { name = "ShieldRimMesh" };
        Vector3[] rimVerts = new Vector3[segments * 2];
        int[] rimTris = new int[segments * 12]; // double-sided

        float innerR = shieldRadius - 0.32f;
        float outerR = shieldRadius + 0.32f;
        for (int i = 0; i < segments; i++)
        {
            float angle = i * angleStep;
            float cos = Mathf.Cos(angle);
            float sin = Mathf.Sin(angle);

            rimVerts[i * 2] = new Vector3(cos * innerR, 0.05f, sin * innerR);
            rimVerts[i * 2 + 1] = new Vector3(cos * outerR, 0.05f, sin * outerR);
        }

        triIndex = 0;
        for (int i = 0; i < segments; i++)
        {
            int next = (i + 1) % segments;
            int b0 = i * 2;
            int t0 = i * 2 + 1;
            int b1 = next * 2;
            int t1 = next * 2 + 1;

            // Top
            rimTris[triIndex++] = b0;
            rimTris[triIndex++] = t1;
            rimTris[triIndex++] = t0;
            rimTris[triIndex++] = b0;
            rimTris[triIndex++] = b1;
            rimTris[triIndex++] = t1;

            // Bottom
            rimTris[triIndex++] = t0;
            rimTris[triIndex++] = t1;
            rimTris[triIndex++] = b0;
            rimTris[triIndex++] = t1;
            rimTris[triIndex++] = b1;
            rimTris[triIndex++] = b0;
        }

        rimMesh.vertices = rimVerts;
        rimMesh.triangles = rimTris;
        rimMesh.RecalculateNormals();
        rimFilter.sharedMesh = rimMesh;

        rimMaterial = CreateTransparentMaterial(unlitShader, rimColor);
        rimRenderer.sharedMaterial = rimMaterial;
        rimRenderer.shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
        rimRenderer.receiveShadows = false;
    }

    Material CreateTransparentMaterial(Shader shader, Color color)
    {
        var mat = new Material(shader);
        mat.name = "Zone Shield Runtime Mat";
        if (shader.name.Contains("Universal Render Pipeline"))
        {
            mat.EnableKeyword("_SURFACE_TYPE_TRANSPARENT");
            mat.SetInt("_Surface", 1); // Transparent
            mat.SetInt("_Blend", 0);   // Alpha
            mat.SetInt("_SrcBlend", (int)UnityEngine.Rendering.BlendMode.SrcAlpha);
            mat.SetInt("_DstBlend", (int)UnityEngine.Rendering.BlendMode.OneMinusSrcAlpha);
            mat.SetInt("_ZWrite", 0);
            mat.SetInt("_Cull", (int)UnityEngine.Rendering.CullMode.Off);
            mat.renderQueue = (int)UnityEngine.Rendering.RenderQueue.Transparent;
        }
        if (mat.HasProperty("_BaseColor")) mat.SetColor("_BaseColor", color);
        else if (mat.HasProperty("_Color")) mat.color = color;
        return mat;
    }

    void BuildAudio()
    {
        audioSource = gameObject.AddComponent<AudioSource>();
        audioSource.playOnAwake = false;
        audioSource.spatialBlend = 0f;

        shieldHumClip = CreateEnergyTone("Shield Hum", 1.5f, 180f, 210f, 0.18f);
        shieldBreakClip = CreateEnergyTone("Shield Break", 0.6f, 320f, 60f, 0.45f);
    }

    AudioClip CreateEnergyTone(string clipName, float duration, float startFreq, float endFreq, float volume)
    {
        const int sampleRate = 22050;
        int count = Mathf.CeilToInt(duration * sampleRate);
        var samples = new float[count];
        float phase = 0f;
        for (int i = 0; i < count; i++)
        {
            float t = i / (float)Mathf.Max(1, count - 1);
            float freq = Mathf.Lerp(startFreq, endFreq, t);
            phase += Mathf.PI * 2f * freq / sampleRate;
            float shimmer = Mathf.Sin(phase * 2f) * 0.25f;
            float envelope = Mathf.Sin(Mathf.PI * t);
            samples[i] = (Mathf.Sin(phase) + shimmer) * envelope * volume;
        }
        var clip = AudioClip.Create(clipName, count, 1, sampleRate, false);
        clip.SetData(samples, 0);
        return clip;
    }
}
