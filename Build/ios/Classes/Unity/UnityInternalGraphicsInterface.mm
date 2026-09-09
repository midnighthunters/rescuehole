#include "UnityInternalGraphicsInterface.h"

extern "C" void UnitySwapchainSetDrawable(UnityViewSwapchain* swapchain, CAMetalDrawableRef drawable)
{
    swapchain->drawable = drawable;
}

extern "C" void UnitySwapchainReleaseDrawable(UnityViewSwapchain* swapchain)
{
    if (swapchain->drawableTexture)
        UnityUnregisterMetalTextureForMemoryProfiler(swapchain->drawableTexture);
    swapchain->drawable = nil;
    swapchain->drawableTexture = nil;
}

extern "C" MTLTextureRef AcquireSwapchainDrawable(UnityViewSwapchain* swapchain)
{
    // check if have acquired the backbuffer texture already
    if (swapchain->drawableTexture)
        return swapchain->drawableTexture;

    // this is coming from CADisplayLink: query next drawable
    if (!swapchain->drawable)
        swapchain->drawable = [swapchain->layer nextDrawable];

    id<MTLTexture> drawableTex = [swapchain->drawable texture];
    if (drawableTex)
    {
        UnityUnregisterMetalTextureForMemoryProfiler(swapchain->drawableTexture);
        swapchain->drawableTexture = drawableTex;
        UnityRegisterExternalRenderSurfaceTextureForMemoryProfiler(drawableTex);
    }

    return drawableTex;
}
