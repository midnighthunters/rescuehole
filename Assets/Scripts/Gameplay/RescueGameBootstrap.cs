using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem.UI;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public enum RescueGameState { Playing, Paused, Won, Lost }

[DisallowMultipleComponent]
public sealed class RescueGameBootstrap : MonoBehaviour
{
    public static RescueGameBootstrap Instance { get; private set; }
    public readonly List<AnimalCollectible> Animals = new List<AnimalCollectible>();

    readonly Dictionary<string, int> goals = new Dictionary<string, int>();
    readonly Dictionary<string, int> goalTotals = new Dictionary<string, int>();
    readonly Dictionary<string, Text> goalTexts = new Dictionary<string, Text>();
    readonly List<MonsterThreat> monsters = new List<MonsterThreat>();
    readonly HashSet<AnimalCollectible> rescuedAnimals = new HashSet<AnimalCollectible>();
    readonly Dictionary<int, Material> optimizedMaterials = new Dictionary<int, Material>();

    AnimalHoleLevel level;
    RescueGameState state;
    float timeRemaining;
    float floorY = 0f;
    Camera gameplayCamera;
    RescueHoleController hole;
    ZoneShieldCircle shieldCircle;

    Text timerText;
    Text levelText;
    Text sizeText;
    Text monsterAlertText;
    Text monsterFedText;
    Text shieldTimerText;
    Image timerFill;
    Image monsterFedFill;
    Image shieldFill;
    GameObject pauseOverlay;
    GameObject resultOverlay;
    GameObject monsterAlert;
    GameObject shieldWidget;
    Text resultTitle;
    Text resultSubtitle;
    Button magnetButton;
    Text magnetLabel;
    AudioSource audioSource;
    AudioClip rescueClip;
    AudioClip biteClip;
    AudioClip explosionClip;
    bool magnetUsed;
    int rescuedCount;
    int growthStage = 1;
    int lastDisplayedSecond = -1;
    int lastDisplayedGrowthStage = -1;
    int lastMonsterAlertSecond = -1;
    int lastShieldSecond = -1;
    bool goalsDirty = true;
    int[] growthThresholds = new int[5];

    public bool IsPlaying => state == RescueGameState.Playing;
    public float TimerNormalizedInverse => level == null ? 0f : 1f - Mathf.Clamp01(timeRemaining / level.Seconds);
    public int RescuedCount => rescuedCount;
    public int GrowthStage => growthStage;
    public int CurrentLevel => level == null ? 1 : level.Number;

    void Awake()
    {
        if (Instance && Instance != this) { Destroy(gameObject); return; }
        Instance = this;
        level = AnimalHoleLevels.Get(AnimalHoleLevels.SelectedLevel);
        Application.targetFrameRate = 60;
        Application.runInBackground = true;
        Screen.orientation = ScreenOrientation.Portrait;
        QualitySettings.vSyncCount = 0;
        QualitySettings.antiAliasing = 2;
        QualitySettings.shadowDistance = 40f;
        Time.fixedDeltaTime = 1f / 60f;
        Time.timeScale = 1f;
        UnityEngine.Random.InitState(level.Seed);
        BuildGame();
    }

    void OnDestroy()
    {
        if (Instance == this) Instance = null;
        Time.timeScale = 1f;
    }

    void BuildGame()
    {
        SetupCameraAndLight();
        SetupAudio();
        BuildPlainGreenSurface();
        BuildCatcher();
        BuildShieldZone();
        SpawnAnimals();
        BuildGrowthThresholds();
        SpawnMonsters();
        BuildUI();
        timeRemaining = level.Seconds;
        state = RescueGameState.Playing;
        UpdateUI();
    }

    void SetupCameraAndLight()
    {
        gameplayCamera = Camera.main;
        if (!gameplayCamera)
        {
            var cameraObject = new GameObject("Main Camera");
            cameraObject.tag = "MainCamera";
            gameplayCamera = cameraObject.AddComponent<Camera>();
            cameraObject.AddComponent<AudioListener>();
        }

        gameplayCamera.transform.position = new Vector3(0f, 21.5f, -17f);
        gameplayCamera.transform.LookAt(new Vector3(0f, 0f, 0.5f));
        gameplayCamera.fieldOfView = 48f;
        gameplayCamera.nearClipPlane = 0.1f;
        gameplayCamera.farClipPlane = 120f;
        gameplayCamera.clearFlags = CameraClearFlags.SolidColor;
        gameplayCamera.backgroundColor = new Color(0.35f, 0.72f, 0.98f); // Clear vibrant sky
        gameplayCamera.allowHDR = false;
        gameplayCamera.allowMSAA = true;

        var light = FindFirstObjectByType<Light>();
        if (light)
        {
            light.transform.rotation = Quaternion.Euler(50f, -30f, 0f);
            light.intensity = 1.3f;
            light.color = new Color(1f, 0.96f, 0.88f);
            light.shadows = LightShadows.Soft;
        }
        RenderSettings.ambientLight = new Color(0.68f, 0.76f, 0.72f);
    }

    void SetupAudio()
    {
        audioSource = gameObject.AddComponent<AudioSource>();
        audioSource.playOnAwake = false;
        audioSource.spatialBlend = 0f;
        rescueClip = CreateToneClip("Animal Rescue Pop", 0.18f, 520f, 1050f, 0.35f, false);
        biteClip = CreateToneClip("Monster Bite", 0.28f, 220f, 90f, 0.38f, true);
        explosionClip = CreateToneClip("Monster Explosion", 0.75f, 130f, 35f, 0.55f, true);
    }

    AudioClip CreateToneClip(string clipName, float duration, float startFrequency, float endFrequency, float volume, bool noisy)
    {
        const int sampleRate = 44100;
        int count = Mathf.CeilToInt(duration * sampleRate);
        var samples = new float[count];
        float phase = 0f;
        var random = new System.Random(clipName.GetHashCode());
        for (int i = 0; i < count; i++)
        {
            float t = i / (float)Mathf.Max(1, count - 1);
            float frequency = Mathf.Lerp(startFrequency, endFrequency, t);
            phase += Mathf.PI * 2f * frequency / sampleRate;
            float envelope = Mathf.Sin(Mathf.PI * t) * (1f - t * 0.3f);
            float noise = noisy ? ((float)random.NextDouble() * 2f - 1f) * 0.35f : 0f;
            samples[i] = (Mathf.Sin(phase) + noise) * envelope * volume;
        }
        var clip = AudioClip.Create(clipName, count, 1, sampleRate, false);
        clip.SetData(samples, 0);
        return clip;
    }

    void BuildPlainGreenSurface()
    {
        floorY = 0f;

        // Clean flat plain green playing surface
        var groundObject = GameObject.CreatePrimitive(PrimitiveType.Cube);
        groundObject.name = "Plain Green Surface";
        groundObject.transform.position = new Vector3(0f, -0.25f, 0f);
        groundObject.transform.localScale = new Vector3(28f, 0.5f, 22f);

        var groundRenderer = groundObject.GetComponent<Renderer>();
        var urpLit = Shader.Find("Universal Render Pipeline/Lit");
        if (!urpLit) urpLit = Shader.Find("Standard");

        var groundMat = new Material(urpLit);
        groundMat.name = "Vibrant Grass Green Mat";
        groundMat.SetColor("_BaseColor", new Color(0.24f, 0.68f, 0.28f)); // Rich vibrant meadow green
        groundMat.SetFloat("_Smoothness", 0.15f);
        groundRenderer.sharedMaterial = groundMat;

        // Clean border curbs around playing boundaries
        var curbMat = new Material(urpLit);
        curbMat.name = "Border Curb Mat";
        curbMat.SetColor("_BaseColor", new Color(0.92f, 0.94f, 0.92f));
        curbMat.SetFloat("_Smoothness", 0.2f);

        CreateCurb("Curb North", new Vector3(0f, 0.15f, 10.5f), new Vector3(26f, 0.3f, 0.4f), curbMat);
        CreateCurb("Curb South", new Vector3(0f, 0.15f, -10.5f), new Vector3(26f, 0.3f, 0.4f), curbMat);
        CreateCurb("Curb East", new Vector3(12.5f, 0.15f, 0f), new Vector3(0.4f, 0.3f, 21.4f), curbMat);
        CreateCurb("Curb West", new Vector3(-12.5f, 0.15f, 0f), new Vector3(0.4f, 0.3f, 21.4f), curbMat);
    }

    void CreateCurb(string name, Vector3 pos, Vector3 scale, Material mat)
    {
        var curb = GameObject.CreatePrimitive(PrimitiveType.Cube);
        curb.name = name;
        curb.transform.position = pos;
        curb.transform.localScale = scale;
        curb.GetComponent<Renderer>().sharedMaterial = mat;
    }

    void BuildCatcher()
    {
        var catcherObject = new GameObject("Black Hole Catcher");
        catcherObject.transform.position = new Vector3(0f, floorY + 0.005f, -4.5f);
        hole = catcherObject.AddComponent<RescueHoleController>();
        hole.Configure(gameplayCamera, floorY);

        var cameraFollow = gameplayCamera.GetComponent<HoleCameraFollow>();
        if (!cameraFollow) cameraFollow = gameplayCamera.gameObject.AddComponent<HoleCameraFollow>();
        cameraFollow.Configure(catcherObject.transform);
    }

    void BuildShieldZone()
    {
        var shieldObject = new GameObject("PUBG Zone Shield");
        shieldObject.transform.position = new Vector3(0f, floorY, 0f);
        shieldCircle = shieldObject.AddComponent<ZoneShieldCircle>();
    }

    void SpawnAnimals()
    {
        // 20 - 20 animals of 2 types (20 Chickens and 20 Dogs)
        AddGoal("Chicken", 20);
        AddGoal("Dog", 20);

        var slots = BuildSpawnSlots();
        int slotIndex = 0;

        // Type 1: Chicken (20)
        SpawnAnimalGroup("Chicken", "Animals_FREE/Prefabs/Chicken_001", 20, 1.05f, 0.45f, 1, 0.65f, slots, ref slotIndex);
        // Type 2: Dog (20)
        SpawnAnimalGroup("Dog", "Animals_FREE/Prefabs/Dog_001", 20, 1.2f, 0.95f, 2, 0.55f, slots, ref slotIndex);
    }

    void AddGoal(string animalType, int count)
    {
        goals[animalType] = count;
        goalTotals[animalType] = count;
    }

    List<Vector3> BuildSpawnSlots()
    {
        // 5 rows x 8 columns = 40 slots nicely spread out over the green pasture
        var slots = new List<Vector3>(40);
        for (int row = 0; row < 5; row++)
        {
            for (int col = 0; col < 8; col++)
            {
                float x = -9.2f + col * 2.62f;
                float z = -6.5f + row * 3.1f;
                slots.Add(new Vector3(x, 0f, z));
            }
        }

        var random = new System.Random(level.Seed);
        for (int i = slots.Count - 1; i > 0; i--)
        {
            int swap = random.Next(i + 1);
            var temp = slots[i]; slots[i] = slots[swap]; slots[swap] = temp;
        }
        return slots;
    }

    void SpawnAnimalGroup(string type, string resource, int count, float visualScale, float mass, int requiredStage, float speed, List<Vector3> slots, ref int slotIndex)
    {
        if (count <= 0) return;
        var source = Resources.Load<GameObject>(resource);
        if (!source) { Debug.LogError("Missing animal model: " + resource); return; }

        for (int i = 0; i < count; i++)
        {
            var slot = slots[slotIndex++];
            slot.x += UnityEngine.Random.Range(-0.35f, 0.35f);
            slot.z += UnityEngine.Random.Range(-0.35f, 0.35f);
            SpawnAnimal(type, source, visualScale, mass, requiredStage, speed * UnityEngine.Random.Range(0.85f, 1.15f), true, slot, i + 1);
        }
    }

    void SpawnAnimal(string type, GameObject source, float visualScale, float mass, int requiredStage, float speed, bool animateVisual, Vector3 position, int number)
    {
        var wrapper = new GameObject(type + " Rescue " + number);
        wrapper.transform.position = new Vector3(position.x, floorY + 0.01f, position.z);
        wrapper.transform.rotation = Quaternion.Euler(0f, UnityEngine.Random.Range(0f, 360f), 0f);

        var visual = Instantiate(source, wrapper.transform, false);
        visual.name = type + " Visual";
        visual.transform.localPosition = Vector3.zero;
        visual.transform.localRotation = source.transform.localRotation;
        visual.transform.localScale = source.transform.localScale * visualScale;
        MakeUrpCompatible(visual);

        var renderers = visual.GetComponentsInChildren<Renderer>(true);
        if (renderers.Length > 0)
        {
            float minimumY = renderers[0].bounds.min.y;
            for (int i = 1; i < renderers.Length; i++) minimumY = Mathf.Min(minimumY, renderers[i].bounds.min.y);
            visual.transform.position += Vector3.up * (floorY + 0.01f - minimumY);
        }

        var animal = wrapper.AddComponent<AnimalCollectible>();
        animal.Configure(type, mass, requiredStage, floorY, new Vector2(-10.5f, 10.5f), new Vector2(-7.8f, 7.8f), speed, animateVisual);
        Animals.Add(animal);
    }

    void BuildGrowthThresholds()
    {
        // 40 total animals
        growthThresholds[0] = 0;
        growthThresholds[1] = 6;  // Stage 2: easily swallows dogs too
        growthThresholds[2] = 15; // Stage 3: noticeably bigger
        growthThresholds[3] = 25; // Stage 4: giant hole
        growthThresholds[4] = 34; // Stage 5: mega hole
    }

    void SpawnMonsters()
    {
        var resource = "RPGMonsterPartnersPBRPolyart/Prefabs/Character/BeholderPolyartDefault";
        var prefab = Resources.Load<GameObject>(resource);
        if (!prefab) { Debug.LogError("Missing monster prefab: " + resource); return; }

        var monsterObject = Instantiate(prefab, new Vector3(0f, floorY, 9.8f), Quaternion.Euler(0f, 180f, 0f));
        monsterObject.name = "Monster Threat";
        monsterObject.transform.localScale = Vector3.one * 1.15f;
        MakeUrpCompatible(monsterObject);

        var threat = monsterObject.AddComponent<MonsterThreat>();
        threat.Configure(0, level.MonsterEntryDelay, level.MonsterSpeed, level.MonsterBiteCapacity);
        monsters.Add(threat);
    }

    void MakeUrpCompatible(GameObject root)
    {
        var urpLit = Shader.Find("Universal Render Pipeline/Lit");
        if (!urpLit) return;
        foreach (var renderer in root.GetComponentsInChildren<Renderer>(true))
        {
            var shared = renderer.sharedMaterials;
            if (shared.Length == 0) shared = new Material[1];
            for (int i = 0; i < shared.Length; i++)
            {
                var source = shared[i];
                int key = source ? source.GetEntityId().GetHashCode() : int.MinValue;
                if (!optimizedMaterials.TryGetValue(key, out var material))
                {
                    material = new Material(urpLit);
                    material.name = (source ? source.name : "Fallback") + " - Runtime URP";
                    var texture = source ? source.mainTexture : null;
                    var color = source && source.HasProperty("_Color") ? source.color : Color.white;
                    if (texture) material.SetTexture("_BaseMap", texture);
                    material.SetColor("_BaseColor", color);
                    material.SetFloat("_Smoothness", 0.12f);
                    material.enableInstancing = true;
                    optimizedMaterials[key] = material;
                }
                shared[i] = material;
            }
            renderer.sharedMaterials = shared;
        }
    }

    void BuildUI()
    {
        if (!FindFirstObjectByType<EventSystem>()) new GameObject("EventSystem", typeof(EventSystem), typeof(InputSystemUIInputModule));
        var canvasObject = new GameObject("Gameplay UI", typeof(Canvas), typeof(CanvasScaler), typeof(GraphicRaycaster));
        var canvas = canvasObject.GetComponent<Canvas>();
        canvas.renderMode = RenderMode.ScreenSpaceOverlay;
        canvas.sortingOrder = 100;
        var scaler = canvasObject.GetComponent<CanvasScaler>();
        scaler.uiScaleMode = CanvasScaler.ScaleMode.ScaleWithScreenSize;
        scaler.referenceResolution = new Vector2(1080f, 1920f);
        scaler.matchWidthOrHeight = 0.5f;

        var sprites = Resources.LoadAll<Sprite>("panel");
        Sprite S(string n) => Array.Find(sprites, s => s.name == n);
        var panelTexture = Resources.Load<Texture2D>("panel");
        var greenButton = panelTexture ? Sprite.Create(panelTexture, new Rect(640f, 168f, 386f, 150f), new Vector2(0.5f, 0.5f), 100f) : S("panel_18");

        // Level Badge (Top Left)
        var levelBadge = AddImage(canvas.transform, "Level Badge", S("panel_2"), new Vector2(0f, 1f), new Vector2(160f, -80f), new Vector2(280f, 100f));
        levelText = AddText(levelBadge.transform, "Level", "LEVEL " + level.Number, 40, TextAnchor.MiddleCenter, Color.white, new Vector2(20f, 0f), new Vector2(230f, 75f));

        // Timer Panel (Top Center)
        var timerPanel = AddImage(canvas.transform, "Timer Panel", S("panel_2"), new Vector2(0.5f, 1f), new Vector2(0f, -80f), new Vector2(360f, 105f));
        timerText = AddText(timerPanel.transform, "Timer", "02:00", 56, TextAnchor.MiddleCenter, Color.white, new Vector2(20f, 0f), new Vector2(260f, 80f));
        timerFill = AddImage(canvas.transform, "Timer Progress", S("panel_4"), new Vector2(0.5f, 1f), new Vector2(0f, -135f), new Vector2(350f, 24f));
        timerFill.type = Image.Type.Filled;
        timerFill.fillMethod = Image.FillMethod.Horizontal;

        // Pause Button (Top Right)
        var pause = AddButton(canvas.transform, "Pause", S("panel_3"), new Vector2(1f, 1f), new Vector2(-80f, -80f), new Vector2(115f, 115f));
        pause.onClick.AddListener(TogglePause);

        // PUBG Zone Shield Widget (Row 2, Center)
        var shieldCard = AddImage(canvas.transform, "PUBG Shield Widget", S("panel_2"), new Vector2(0.5f, 1f), new Vector2(0f, -170f), new Vector2(500f, 75f));
        shieldCard.color = new Color(0.2f, 0.75f, 1f, 0.95f);
        shieldWidget = shieldCard.gameObject;
        shieldTimerText = AddText(shieldCard.transform, "Shield Text", "🛡️ PUBG ZONE: ARMED", 28, TextAnchor.MiddleCenter, Color.white, new Vector2(10f, 12f), new Vector2(460f, 44f));
        shieldFill = AddImage(shieldCard.transform, "Shield Fill", S("panel_4"), new Vector2(0.5f, 0.5f), new Vector2(10f, -22f), new Vector2(440f, 18f));
        shieldFill.type = Image.Type.Filled;
        shieldFill.fillMethod = Image.FillMethod.Horizontal;
        shieldFill.color = new Color(0f, 0.9f, 1f);
        shieldFill.fillAmount = 1f;

        // Monster Fullness Badge (Right Side)
        var fullness = AddImage(canvas.transform, "Monster Fullness", S("panel_2"), new Vector2(1f, 1f), new Vector2(-155f, -220f), new Vector2(280f, 95f));
        monsterFedText = AddText(fullness.transform, "Fullness Text", "MONSTER 0 / " + level.MonsterBiteCapacity, 24, TextAnchor.MiddleCenter, Color.white, new Vector2(10f, 12f), new Vector2(240f, 45f));
        monsterFedFill = AddImage(fullness.transform, "Fullness Fill", S("panel_4"), new Vector2(0.5f, 0.5f), new Vector2(10f, -24f), new Vector2(230f, 20f));
        monsterFedFill.type = Image.Type.Filled;
        monsterFedFill.fillMethod = Image.FillMethod.Horizontal;
        monsterFedFill.fillAmount = 0f;

        // Monster Incoming Alert (Banner Center, width 540)
        var alertImage = AddImage(canvas.transform, "Monster Incoming Alert", null, new Vector2(0.5f, 1f), new Vector2(0f, -255f), new Vector2(540f, 65f));
        alertImage.color = new Color(0.85f, 0.15f, 0.15f, 0.92f);
        monsterAlert = alertImage.gameObject;
        monsterAlertText = AddText(monsterAlert.transform, "Alert Text", "MONSTER INCOMING", 30, TextAnchor.MiddleCenter, Color.white, Vector2.zero, new Vector2(510f, 55f));

        // Animal Goal Cards (2 Types: Chicken 0/20, Dog 0/20)
        var types = new[] { "Chicken", "Dog" };
        var icons = new[] { "panel_15", "panel_0" };
        for (int i = 0; i < types.Length; i++)
        {
            var card = AddImage(canvas.transform, types[i] + " Goal", S(icons[i]), new Vector2(0f, 1f), new Vector2(105f, -270f - i * 185f), new Vector2(175f, 175f));
            AddText(card.transform, "Type", types[i].ToUpperInvariant(), 22, TextAnchor.UpperCenter, Color.white, new Vector2(0f, 42f), new Vector2(160f, 55f));
            goalTexts[types[i]] = AddText(card.transform, "Count", "0 / " + goalTotals[types[i]], 38, TextAnchor.LowerCenter, Color.white, new Vector2(0f, -30f), new Vector2(160f, 62f));
        }

        // Magnet Booster Button
        magnetButton = AddButton(canvas.transform, "Magnet Booster", S("panel_5"), new Vector2(0f, 0f), new Vector2(110f, 120f), new Vector2(185f, 185f));
        magnetButton.onClick.AddListener(UseMagnet);
        magnetLabel = AddText(magnetButton.transform, "Charge", "1", 38, TextAnchor.LowerRight, Color.white, new Vector2(-5f, 2f), new Vector2(82f, 64f));

        // Hole Size Badge
        var sizeBadge = AddImage(canvas.transform, "Hole Size", S("panel_2"), new Vector2(0.5f, 0f), new Vector2(0f, 86f), new Vector2(310f, 98f));
        sizeText = AddText(sizeBadge.transform, "Size Label", "SIZE 1 / 5", 34, TextAnchor.MiddleCenter, Color.white, new Vector2(16f, 0f), new Vector2(240f, 70f));

        // Overlays
        pauseOverlay = AddOverlay(canvas.transform, S("panel_17"), "PAUSED", "The timer is stopped", greenButton, "RESUME", TogglePause, "MAIN MENU", GoToMainMenu);
        pauseOverlay.SetActive(false);
        resultOverlay = AddOverlay(canvas.transform, S("panel_17"), "", "", greenButton, "RETRY", Restart, "MAIN MENU", GoToMainMenu);
        resultOverlay.SetActive(false);
        resultTitle = resultOverlay.transform.Find("Panel/Title").GetComponent<Text>();
        resultSubtitle = resultOverlay.transform.Find("Panel/Subtitle").GetComponent<Text>();
    }

    GameObject AddOverlay(Transform parent, Sprite panelSprite, string title, string subtitle, Sprite buttonSprite, string primaryText, UnityEngine.Events.UnityAction primaryAction, string secondaryText, UnityEngine.Events.UnityAction secondaryAction)
    {
        var root = new GameObject("Game Overlay", typeof(RectTransform), typeof(Image));
        root.transform.SetParent(parent, false);
        var rt = (RectTransform)root.transform;
        rt.anchorMin = Vector2.zero; rt.anchorMax = Vector2.one; rt.offsetMin = Vector2.zero; rt.offsetMax = Vector2.zero;
        root.GetComponent<Image>().color = new Color(0.04f, 0.08f, 0.16f, 0.78f);
        var panel = AddImage(root.transform, "Panel", panelSprite, new Vector2(0.5f, 0.5f), Vector2.zero, new Vector2(760f, 650f));
        AddText(panel.transform, "Title", title, 68, TextAnchor.MiddleCenter, new Color(0.23f, 0.12f, 0.36f), new Vector2(0f, 165f), new Vector2(640f, 110f));
        AddText(panel.transform, "Subtitle", subtitle, 32, TextAnchor.MiddleCenter, new Color(0.25f, 0.22f, 0.28f), new Vector2(0f, 88f), new Vector2(620f, 90f));
        var primary = AddButton(panel.transform, "Primary Action", buttonSprite, new Vector2(0.5f, 0.5f), new Vector2(0f, -45f), new Vector2(370f, 130f));
        primary.onClick.AddListener(primaryAction);
        AddText(primary.transform, "Label", primaryText, 42, TextAnchor.MiddleCenter, Color.white, Vector2.zero, new Vector2(310f, 92f));
        var secondary = AddButton(panel.transform, "Secondary Action", buttonSprite, new Vector2(0.5f, 0.5f), new Vector2(0f, -190f), new Vector2(370f, 115f));
        secondary.onClick.AddListener(secondaryAction);
        AddText(secondary.transform, "Label", secondaryText, 34, TextAnchor.MiddleCenter, Color.white, Vector2.zero, new Vector2(310f, 82f));
        return root;
    }

    Image AddImage(Transform parent, string name, Sprite sprite, Vector2 anchor, Vector2 anchoredPosition, Vector2 size, bool preserveAspect = false)
    {
        var go = new GameObject(name, typeof(RectTransform), typeof(Image));
        go.transform.SetParent(parent, false);
        var rect = (RectTransform)go.transform;
        rect.anchorMin = anchor; rect.anchorMax = anchor; rect.pivot = new Vector2(0.5f, 0.5f);
        rect.anchoredPosition = anchoredPosition; rect.sizeDelta = size;
        var image = go.GetComponent<Image>();
        image.sprite = sprite;
        if (sprite && sprite.border != Vector4.zero) image.type = Image.Type.Sliced;
        image.preserveAspect = preserveAspect;
        return image;
    }

    Button AddButton(Transform parent, string name, Sprite sprite, Vector2 anchor, Vector2 anchoredPosition, Vector2 size, bool preserveAspect = false)
    {
        var image = AddImage(parent, name, sprite, anchor, anchoredPosition, size, preserveAspect);
        var button = image.gameObject.AddComponent<Button>();
        button.targetGraphic = image;
        return button;
    }

    Text AddText(Transform parent, string name, string value, int size, TextAnchor alignment, Color color, Vector2 anchoredPosition, Vector2 rectSize)
    {
        var go = new GameObject(name, typeof(RectTransform), typeof(Text), typeof(Shadow));
        go.transform.SetParent(parent, false);
        var rect = (RectTransform)go.transform;
        rect.anchorMin = rect.anchorMax = new Vector2(0.5f, 0.5f);
        rect.anchoredPosition = anchoredPosition; rect.sizeDelta = rectSize;
        var text = go.GetComponent<Text>();
        text.text = value; text.font = Resources.GetBuiltinResource<Font>("LegacyRuntime.ttf");
        text.fontSize = size; text.fontStyle = FontStyle.Bold; text.alignment = alignment; text.color = color;
        text.resizeTextForBestFit = true; text.resizeTextMinSize = 16; text.resizeTextMaxSize = size;
        var shadow = go.GetComponent<Shadow>(); shadow.effectColor = new Color(0f, 0f, 0f, 0.55f); shadow.effectDistance = new Vector2(3f, -3f);
        return text;
    }

    void Update()
    {
        if (state != RescueGameState.Playing) return;
        timeRemaining = Mathf.Max(0f, timeRemaining - Time.deltaTime);
        UpdateUI();
        if (timeRemaining <= 0f) Lose("TIME'S UP!", "Rescue every animal before the timer ends");
    }

    void UpdateUI()
    {
        int seconds = Mathf.CeilToInt(timeRemaining);
        if (timerText && seconds != lastDisplayedSecond)
        {
            lastDisplayedSecond = seconds;
            timerText.text = (seconds / 60).ToString("00") + ":" + (seconds % 60).ToString("00");
            timerText.color = seconds <= 10 ? new Color(1f, 0.35f, 0.2f) : Color.white;
        }
        if (timerFill) timerFill.fillAmount = timeRemaining / Mathf.Max(1f, level.Seconds);

        if (goalsDirty)
        {
            goalsDirty = false;
            foreach (var pair in goals)
                if (goalTexts.TryGetValue(pair.Key, out var text)) text.text = (goalTotals[pair.Key] - pair.Value) + " / " + goalTotals[pair.Key];
        }

        if (sizeText && growthStage != lastDisplayedGrowthStage)
        {
            lastDisplayedGrowthStage = growthStage;
            sizeText.text = "SIZE " + growthStage + " / 5";
        }

        // PUBG Shield UI update
        if (shieldCircle)
        {
            if (shieldCircle.IsActive)
            {
                int sSec = Mathf.CeilToInt(shieldCircle.RemainingTime);
                if (sSec != lastShieldSecond)
                {
                    lastShieldSecond = sSec;
                    if (shieldTimerText) shieldTimerText.text = "🛡️ PUBG ZONE: " + sSec + "s";
                }
                if (shieldFill) shieldFill.fillAmount = shieldCircle.RemainingTime / shieldCircle.TotalDuration;
            }
            else if (shieldCircle.IsArmed)
            {
                if (shieldTimerText && lastShieldSecond != -1)
                {
                    lastShieldSecond = -1;
                    shieldTimerText.text = "🛡️ PUBG ZONE: ARMED";
                    if (shieldFill) shieldFill.fillAmount = 1f;
                }
            }
            else
            {
                if (shieldTimerText && lastShieldSecond != -99)
                {
                    lastShieldSecond = -99;
                    shieldTimerText.text = "⚠️ PUBG SHIELD: EXPIRED";
                    if (shieldFill) shieldFill.fillAmount = 0f;
                    if (shieldWidget) shieldWidget.GetComponent<Image>().color = new Color(0.4f, 0.45f, 0.5f, 0.7f);
                }
            }
        }

        // Alert banner
        if (monsterAlert)
        {
            float elapsed = level.Seconds - timeRemaining;
            bool countdown = elapsed < level.MonsterEntryDelay;
            bool entering = elapsed >= level.MonsterEntryDelay && elapsed < level.MonsterEntryDelay + 3.5f;
            bool shieldWarning = shieldCircle && shieldCircle.IsActive && shieldCircle.RemainingTime <= 5f && shieldCircle.RemainingTime > 0.1f;
            bool shieldBroken = shieldCircle && !shieldCircle.IsActive && elapsed < level.MonsterEntryDelay + 34f;

            monsterAlert.SetActive(countdown || entering || shieldWarning || shieldBroken);

            if (countdown)
            {
                int alertSecond = Mathf.CeilToInt(level.MonsterEntryDelay - elapsed);
                if (alertSecond != lastMonsterAlertSecond)
                {
                    lastMonsterAlertSecond = alertSecond;
                    monsterAlertText.text = "MONSTER ENTERING IN " + alertSecond;
                }
            }
            else if (entering && lastMonsterAlertSecond != 0)
            {
                lastMonsterAlertSecond = 0;
                monsterAlertText.text = "🛡️ PUBG ZONE SHIELD ACTIVE! (30s)";
            }
            else if (shieldWarning)
            {
                monsterAlertText.text = "⚠️ SHIELD COLLAPSING IN " + Mathf.CeilToInt(shieldCircle.RemainingTime) + "s!";
            }
            else if (shieldBroken)
            {
                monsterAlertText.text = "⚠️ SHIELD DOWN! PROTECT THE ANIMALS!";
            }
        }
    }

    public void RegisterRescue(AnimalCollectible animal)
    {
        if (state != RescueGameState.Playing || !animal || !goals.ContainsKey(animal.AnimalType)) return;
        if (!rescuedAnimals.Add(animal)) return;

        goals[animal.AnimalType] = Mathf.Max(0, goals[animal.AnimalType] - 1);
        rescuedCount++;
        goalsDirty = true;
        audioSource.pitch = UnityEngine.Random.Range(0.95f, 1.15f);
        audioSource.PlayOneShot(rescueClip);
        UpdateGrowthStage();
        UpdateUI();

        foreach (var count in goals.Values) if (count > 0) return;
        Win();
    }

    public Vector3 GetMonsterRespawnPoint()
    {
        return new Vector3(UnityEngine.Random.Range(-10f, 10f), floorY + 0.01f, UnityEngine.Random.Range(-7f, 7f));
    }

    public void RegisterMonsterBite(MonsterThreat monster, int bites, int capacity)
    {
        if (state != RescueGameState.Playing) return;
        audioSource.pitch = UnityEngine.Random.Range(0.9f, 1.05f);
        audioSource.PlayOneShot(biteClip);

        if (monsterFedText) monsterFedText.text = "MONSTER " + bites + " / " + capacity;
        if (monsterFedFill)
        {
            monsterFedFill.fillAmount = bites / (float)Mathf.Max(1, capacity);
            monsterFedFill.color = bites >= capacity - 2 ? new Color(1f, 0.2f, 0.1f) : Color.white;
        }

        if (bites < capacity) return;
        audioSource.pitch = 1f;
        audioSource.PlayOneShot(explosionClip);
        if (monster) monster.Explode();
        Lose("MONSTER EXPLODED!", "It ate too many animals — try again");
    }

    void UpdateGrowthStage()
    {
        int nextStage = 1;
        for (int i = 1; i < growthThresholds.Length; i++)
            if (rescuedCount >= growthThresholds[i]) nextStage = i + 1;

        if (nextStage == growthStage) return;
        growthStage = nextStage;
        hole.SetGrowthStage(growthStage);
    }

    void Win()
    {
        if (state != RescueGameState.Playing) return;
        state = RescueGameState.Won;
        AnimalHoleLevels.Complete(level.Number);
        resultTitle.text = "ALL 40 ANIMALS RESCUED!";
        resultSubtitle.text = "Level Complete with " + Mathf.CeilToInt(timeRemaining) + "s remaining!";
        var label = resultOverlay.transform.Find("Panel/Primary Action/Label").GetComponent<Text>();
        label.text = level.Number < AnimalHoleLevels.Count ? "NEXT LEVEL" : "PLAY AGAIN";
        var button = resultOverlay.transform.Find("Panel/Primary Action").GetComponent<Button>();
        button.onClick.RemoveAllListeners();
        button.onClick.AddListener(NextLevel);
        resultOverlay.SetActive(true);
        Debug.Log("[AnimalHole] Level won! All 40 animals rescued!");
    }

    void Lose(string title, string subtitle)
    {
        if (state != RescueGameState.Playing) return;
        state = RescueGameState.Lost;
        resultTitle.text = title;
        resultSubtitle.text = subtitle;
        resultOverlay.SetActive(true);
        Debug.Log("[AnimalHole] Level " + level.Number + " lost: " + title);
    }

    void TogglePause()
    {
        if (state == RescueGameState.Playing)
        {
            state = RescueGameState.Paused;
            pauseOverlay.SetActive(true);
            Time.timeScale = 0f;
        }
        else if (state == RescueGameState.Paused)
        {
            Time.timeScale = 1f;
            state = RescueGameState.Playing;
            pauseOverlay.SetActive(false);
        }
    }

    void UseMagnet()
    {
        if (!IsPlaying || magnetUsed) return;
        magnetUsed = true;
        hole.ActivateMagnet(6f);
        magnetLabel.text = "0";
        magnetButton.interactable = false;
    }

    void Restart()
    {
        Time.timeScale = 1f;
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

    void NextLevel()
    {
        int next = level.Number < AnimalHoleLevels.Count ? level.Number + 1 : 1;
        AnimalHoleLevels.Select(next);
        Restart();
    }

    void GoToMainMenu()
    {
        Time.timeScale = 1f;
        SceneManager.LoadScene("MainMenu");
    }

    public void DebugCaptureFirstFit()
    {
        if (hole) hole.DebugCaptureFirstFit();
    }

    public void DebugAutoRescueAll() => StartCoroutine(DebugRescueRoutine());

    IEnumerator DebugRescueRoutine()
    {
        foreach (var animal in Animals)
        {
            if (!animal || animal.IsRescued) continue;
            animal.DebugRescueInstant();
            yield return null;
        }
    }

    public void DebugExpireTimer() => timeRemaining = 0f;

    public void DebugOverfeedMonster()
    {
        if (monsters.Count == 0) return;
        RegisterMonsterBite(monsters[0], level.MonsterBiteCapacity, level.MonsterBiteCapacity);
    }
}
