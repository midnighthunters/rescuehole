#include "UnityInternalInterface.h"

// These helpers that are wrappers on top of other functions
// could be inline in header, but swift does not support that well and leads to linker errors

extern "C" {

void UnityPlayerLoopWithBackbuffer(UnityRenderBufferHandle backBufferColor, UnityRenderBufferHandle backBufferDepth)
{
    UnityPlayerLoop(false, backBufferColor, backBufferDepth);
}

void UnityBatchPlayerLoop(void)
{
    UnityPlayerLoop(true, nullptr, nullptr);
}

void UnityPause(int pause)
{
    UnitySetPlayerPause(pause ? kUnityPauseModePause : kUnityPauseModeResume);
}

}
