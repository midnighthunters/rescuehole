# Resource Asset Map

The current level uses one combined soccer-stadium environment and animal prefabs exclusively from `Assets/Resources/Animals_FREE`.

| Asset | Path | Current use | Runtime setup |
|---|---|---|---|
| Soccer stadium environment | `Assets/Resources/floors/floors/Prefabs/Location with environment/soccer field with environment.prefab` | Expanded single-level floor, grandstands, goals, fences, trees, and stadium lighting | Scaled to 0.5; shared URP materials; static batching |
| Chicken_001 | `Assets/Resources/Animals_FREE/Prefabs/Chicken_001.prefab` | 30 small Size-1 animals | Upright wrapper; random wandering; only two instances animate |
| Kitty_001 | `Assets/Resources/Animals_FREE/Prefabs/Kitty_001.prefab` | 20 medium Size-2 animals | Upright wrapper; random wandering; only two instances animate |
| Dog_001 | `Assets/Resources/Animals_FREE/Prefabs/Dog_001.prefab` | 8 large Size-3 animals | Upright wrapper; random wandering; only two instances animate |
| Horse_001 | `Assets/Resources/Animals_FREE/Prefabs/Horse_001.prefab` | 4 extra-large Size-5 animals | Upright wrapper; random wandering; only two instances animate |
| BeholderPolyartDefault | `Assets/Resources/RPGMonsterPartnersPBRPolyart/Prefabs/Character/BeholderPolyartDefault.prefab` | First distant monster | Spawns beyond the north stands and begins approaching after the warning countdown |
| SlimePolyart | `Assets/Resources/RPG Monster DUO PBR Polyart/Prefabs/PolyartDefault/SlimePolyart.prefab` | Second distant monster | Staggered entry after the first monster |
| hole_catcher_0 | `Assets/Resources/hole_catcher.png` | Draggable five-stage rescue hole | Expanded stadium bounds, edge scrolling, and camera follow |
| panel sprite atlas | `Assets/Resources/panel.png` | Timer, four goals, pause, booster, size badge, and results | Existing art plus a lightweight red monster-warning banner |

No model from `Assets/Resources/animals` is loaded by the gameplay scripts.
