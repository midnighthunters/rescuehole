using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.InputSystem.UI;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

[DisallowMultipleComponent]
public sealed class MainMenuBootstrap : MonoBehaviour
{
    Font font;
    Sprite buttonSprite;
    Sprite homeSprite;
    Sprite trophySprite;
    AudioSource audioSource;
    AudioClip clickClip;

    void Awake()
    {
        Screen.orientation = ScreenOrientation.Portrait;
        Application.targetFrameRate = 60;
        Time.timeScale = 1f;
        font = Resources.GetBuiltinResource<Font>("LegacyRuntime.ttf");
        BuildSprites();
        BuildAudio();
        BuildMenu();
    }

    void BuildSprites()
    {
        var sheet = Resources.Load<Texture2D>("panel_main");
        if (!sheet) return;
        buttonSprite = Crop(sheet, .27f, .29f, .47f, .25f);
        homeSprite = Crop(sheet, .55f, .01f, .15f, .22f);
        trophySprite = Crop(sheet, .84f, .01f, .15f, .22f);
    }

    Sprite Crop(Texture2D texture, float x, float y, float width, float height)
    {
        var rect = new Rect(texture.width * x, texture.height * y, texture.width * width, texture.height * height);
        return Sprite.Create(texture, rect, new Vector2(.5f, .5f), 100f);
    }

    void BuildAudio()
    {
        audioSource = gameObject.AddComponent<AudioSource>();
        audioSource.playOnAwake = false;
        const int sampleRate = 22050;
        int count = Mathf.CeilToInt(.11f * sampleRate);
        var samples = new float[count];
        float phase = 0f;
        for (int i = 0; i < count; i++)
        {
            float t = i / (float)count;
            phase += Mathf.PI * 2f * Mathf.Lerp(420f, 680f, t) / sampleRate;
            samples[i] = Mathf.Sin(phase) * (1f - t) * .25f;
        }
        clickClip = AudioClip.Create("Menu Click", count, 1, sampleRate, false);
        clickClip.SetData(samples, 0);
    }

    void BuildMenu()
    {
        if (!FindFirstObjectByType<EventSystem>()) new GameObject("EventSystem", typeof(EventSystem), typeof(InputSystemUIInputModule));
        var canvasObject = new GameObject("Main Menu UI", typeof(Canvas), typeof(CanvasScaler), typeof(GraphicRaycaster));
        var canvas = canvasObject.GetComponent<Canvas>();
        canvas.renderMode = RenderMode.ScreenSpaceOverlay;
        var scaler = canvasObject.GetComponent<CanvasScaler>();
        scaler.uiScaleMode = CanvasScaler.ScaleMode.ScaleWithScreenSize;
        scaler.referenceResolution = new Vector2(1080f, 1920f);
        scaler.matchWidthOrHeight = .5f;

        var background = AddImage(canvas.transform, "Sky Background", null, Vector2.zero, Vector2.one, Vector2.zero, Vector2.zero);
        background.color = new Color(.08f, .42f, .78f);
        background.raycastTarget = false;

        var glow = AddImage(canvas.transform, "Center Glow", null, new Vector2(.5f, .5f), new Vector2(.5f, .5f), Vector2.zero, new Vector2(930f, 1710f));
        glow.color = new Color(.18f, .67f, 1f, .45f);
        glow.raycastTarget = false;

        var header = AddImage(canvas.transform, "Title Panel", buttonSprite, new Vector2(.5f, 1f), new Vector2(.5f, 1f), new Vector2(0f, -190f), new Vector2(820f, 275f));
        AddText(header.transform, "Title", "ANIMAL HOLE", 82, new Vector2(0f, 25f), new Vector2(690f, 105f), new Color(.97f, .98f, 1f));
        AddText(header.transform, "Subtitle", "RESCUE RUSH", 33, new Vector2(0f, -52f), new Vector2(620f, 58f), new Color(.98f, .86f, .28f));

        var home = AddImage(canvas.transform, "Home Icon", homeSprite, new Vector2(0f, 1f), new Vector2(0f, 1f), new Vector2(115f, -130f), new Vector2(150f, 150f));
        home.raycastTarget = false;
        var trophy = AddImage(canvas.transform, "Trophy Icon", trophySprite, new Vector2(1f, 1f), new Vector2(1f, 1f), new Vector2(-115f, -130f), new Vector2(150f, 150f));
        trophy.raycastTarget = false;

        int unlocked = AnimalHoleLevels.UnlockedLevel;
        AddText(canvas.transform, "Choose Label", "CHOOSE A LEVEL", 45, new Vector2(0f, 515f), new Vector2(720f, 74f), Color.white);
        AddText(canvas.transform, "Progress", "PROGRESS  " + Mathf.Max(0, unlocked - 1) + " / " + AnimalHoleLevels.Count, 29, new Vector2(0f, 456f), new Vector2(600f, 55f), new Color(.84f, .94f, 1f));

        var levelPanel = AddImage(canvas.transform, "Level Panel", null, new Vector2(.5f, .5f), new Vector2(.5f, .5f), new Vector2(0f, -40f), new Vector2(1000f, 1040f));
        levelPanel.color = new Color(.025f, .15f, .32f, .64f);
        var gridObject = new GameObject("Level Grid", typeof(RectTransform), typeof(GridLayoutGroup));
        gridObject.transform.SetParent(levelPanel.transform, false);
        var gridRect = (RectTransform)gridObject.transform;
        gridRect.anchorMin = Vector2.zero; gridRect.anchorMax = Vector2.one;
        gridRect.offsetMin = new Vector2(42f, 42f); gridRect.offsetMax = new Vector2(-42f, -42f);
        var grid = gridObject.GetComponent<GridLayoutGroup>();
        grid.cellSize = new Vector2(165f, 165f);
        grid.spacing = new Vector2(22f, 24f);
        grid.constraint = GridLayoutGroup.Constraint.FixedColumnCount;
        grid.constraintCount = 5;
        grid.childAlignment = TextAnchor.MiddleCenter;

        for (int number = 1; number <= AnimalHoleLevels.Count; number++) CreateLevelButton(gridObject.transform, number, number <= unlocked);

        AddText(canvas.transform, "Hint", "Move the hole under animals • Save them before the monster gets full", 29, new Vector2(0f, -790f), new Vector2(920f, 95f), new Color(.9f, .96f, 1f));
    }

    void CreateLevelButton(Transform parent, int number, bool completedOrUnlocked)
    {
        var buttonObject = new GameObject("Level " + number, typeof(RectTransform), typeof(Image), typeof(Button));
        buttonObject.transform.SetParent(parent, false);
        var image = buttonObject.GetComponent<Image>();
        image.sprite = buttonSprite;
        image.preserveAspect = false;
        image.color = completedOrUnlocked ? Color.white : new Color(.72f, .82f, 1f);
        var button = buttonObject.GetComponent<Button>();
        button.targetGraphic = image;
        int selected = number;
        button.onClick.AddListener(() => StartLevel(selected));
        AddText(buttonObject.transform, "Number", number.ToString("00"), 52, Vector2.zero, new Vector2(130f, 72f), Color.white);
        string badge = number < AnimalHoleLevels.UnlockedLevel ? "★" : number == AnimalHoleLevels.UnlockedLevel ? "NEW" : "PLAY";
        AddText(buttonObject.transform, "Badge", badge, 18, new Vector2(0f, -45f), new Vector2(110f, 32f), new Color(1f, .85f, .18f));
    }

    void StartLevel(int level)
    {
        audioSource.PlayOneShot(clickClip);
        AnimalHoleLevels.Select(level);
        SceneManager.LoadScene("SampleScene");
    }

    Image AddImage(Transform parent, string name, Sprite sprite, Vector2 anchorMin, Vector2 anchorMax, Vector2 position, Vector2 size)
    {
        var go = new GameObject(name, typeof(RectTransform), typeof(Image));
        go.transform.SetParent(parent, false);
        var rect = (RectTransform)go.transform;
        rect.anchorMin = anchorMin; rect.anchorMax = anchorMax; rect.pivot = new Vector2(.5f, .5f);
        if (anchorMin == Vector2.zero && anchorMax == Vector2.one)
        {
            rect.offsetMin = Vector2.zero; rect.offsetMax = Vector2.zero;
        }
        else
        {
            rect.anchoredPosition = position; rect.sizeDelta = size;
        }
        var image = go.GetComponent<Image>();
        image.sprite = sprite;
        image.preserveAspect = sprite != buttonSprite;
        return image;
    }

    Text AddText(Transform parent, string name, string value, int size, Vector2 position, Vector2 rectSize, Color color)
    {
        var go = new GameObject(name, typeof(RectTransform), typeof(Text), typeof(Shadow));
        go.transform.SetParent(parent, false);
        var rect = (RectTransform)go.transform;
        rect.anchorMin = rect.anchorMax = new Vector2(.5f, .5f);
        rect.anchoredPosition = position; rect.sizeDelta = rectSize;
        var text = go.GetComponent<Text>();
        text.text = value; text.font = font; text.fontSize = size; text.fontStyle = FontStyle.Bold;
        text.alignment = TextAnchor.MiddleCenter; text.color = color;
        text.resizeTextForBestFit = true; text.resizeTextMinSize = 14; text.resizeTextMaxSize = size;
        var shadow = go.GetComponent<Shadow>();
        shadow.effectColor = new Color(0f, 0f, 0f, .55f); shadow.effectDistance = new Vector2(3f, -3f);
        return text;
    }
}
