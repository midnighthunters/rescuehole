# Animal Rescue Hole — Implementation Report

## Outcome

The portrait vertical slice in `Assets/Scenes/SampleScene.unity` now takes place inside an expanded soccer stadium. It contains 62 upright, randomly wandering animals sourced exclusively from `Animals_FREE`, two distant approaching monsters, a five-stage growing hole, camera follow, and a visible monster-entry countdown.

## Current gameplay

- 30 chickens, 20 cats, 8 dogs, and 4 horses.
- Hole growth thresholds at 10, 25, 45, and 58 rescues.
- Larger species require Sizes 2, 3, and 5.
- Expanded stadium movement bounds and edge scrolling.
- Smooth camera tracking when the hole leaves the opening viewport.
- Monsters start beyond the north stands, wait through a 12-second warning, and then approach over roughly 52 seconds.
- Red `MONSTERS ENTERING IN n` alert followed by `MONSTERS ENTERING!`.
- Pause, retry, timer failure, magnet booster, exact-once counting, and win state remain active.

## Performance work

- Replaced the previous mixed FBX population with the requested `Animals_FREE` prefabs.
- Reduced continuously enabled animal Animators from 62 to 8; off-screen animation culling remains enabled.
- Reduced idle animal Rigidbodies from 62 to 0. Capture physics are created only when an animal begins falling.
- Disabled idle animal colliders; they activate only during capture.
- Converted per-instance runtime materials into a shared cached URP material set.
- Enabled GPU instancing on converted materials and static-batched the stadium environment.
- Disabled animal/monster real-time shadows, HDR, MSAA, soft particles, and real-time reflection probes for this mobile-oriented scene.
- Throttled the hole's rescue scan to approximately 13 checks per second.

## Verification

| Check | Result |
|---|---|
| Gameplay compilation | Pass — zero gameplay compile errors |
| Asset-source policy | Pass — no gameplay reference to `Assets/Resources/animals` |
| Stadium environment | Pass — combined stadium prefab loaded with expanded playable bounds |
| Runtime population | Pass — 62 animals |
| Idle physics | Pass — 0 Rigidbodies before capture |
| Active animation | Pass — 10/64 Animators enabled total, including both monsters |
| Monster warning and distant spawn | Pass — warning rendered; monsters observed around Z 10.5 beyond the opening field |
| Full rescue sequence | Pass — 62/62 rescued, active count 0, Size 5 reached, win fired |
| Main-thread frame time | Improved from about 3.37 ms to about 1.94 ms in the same Editor profiling workflow |
| Render-thread frame time | Improved from about 361.9 ms to about 1.42 ms after removing duplicated animated/material/shadow work |
| Scene validation | Pass — no missing scripts or broken prefabs |

Frame timing in the Unity Editor includes host presentation waits and is not a substitute for an on-device build profile, but the expensive game-owned render and simulation work has been removed.
