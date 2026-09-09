using UnityEngine;

public sealed class AnimalHoleLevel
{
    public int Number;
    public int Chickens;
    public int Cats;
    public int Dogs;
    public int Horses;
    public float Seconds;
    public int MonsterCount;
    public float MonsterEntryDelay;
    public float MonsterSpeed;
    public int MonsterBiteCapacity;
    public int Seed;
    public Color ThemeColor;

    public int TotalAnimals => Chickens + Cats + Dogs + Horses;
}

public static class AnimalHoleLevels
{
    public const int Count = 25;
    public const string SelectedLevelKey = "AnimalHole.SelectedLevel";
    public const string UnlockedLevelKey = "AnimalHole.UnlockedLevel";

    public static AnimalHoleLevel Get(int requestedLevel)
    {
        int level = Mathf.Clamp(requestedLevel, 1, Count);

        // 20 - 20 animals of 2 types (Chickens and Dogs)
        int chickens = 20;
        int dogs = 20;
        int cats = 0;
        int horses = 0;

        return new AnimalHoleLevel
        {
            Number = level,
            Chickens = chickens,
            Cats = cats,
            Dogs = dogs,
            Horses = horses,
            Seconds = 120f,
            MonsterCount = 1,
            MonsterEntryDelay = 3.5f,
            MonsterSpeed = 0.55f,
            MonsterBiteCapacity = 15,
            Seed = 5107 + level * 977,
            ThemeColor = new Color(0.24f, 0.72f, 0.28f)
        };
    }

    public static int SelectedLevel => Mathf.Clamp(PlayerPrefs.GetInt(SelectedLevelKey, 1), 1, Count);
    public static int UnlockedLevel => Mathf.Clamp(PlayerPrefs.GetInt(UnlockedLevelKey, 1), 1, Count);

    public static void Select(int level)
    {
        PlayerPrefs.SetInt(SelectedLevelKey, Mathf.Clamp(level, 1, Count));
        PlayerPrefs.Save();
    }

    public static void Complete(int level)
    {
        int unlocked = Mathf.Max(UnlockedLevel, Mathf.Min(Count, level + 1));
        PlayerPrefs.SetInt(UnlockedLevelKey, unlocked);
        PlayerPrefs.Save();
    }
}
