#pragma once

#include <assert.h>
#include <stdint.h>
#include <stdarg.h>

#include <CoreFoundation/CoreFoundation.h>

#include "UnityForwardDecls.h"
#include "UnityRendering.h"

#ifdef __OBJC__
#import "Foundation/Foundation.h"
#endif


//
// these are functions referenced in trampoline and implemented in unity player lib
//

#ifdef __cplusplus
extern "C" {
#endif

int     UnityIsFocused(void);               // 1 if player is focused, 0 if in the background

// rendering

void    UnityFinishRendering(void);
void    UnityDisplayLinkCallback(double /*machAbsoluteTimeSeconds*/); // argument is not used anymore

// controling player internals

// TODO: needs some cleanup
void    UnityGLInvalidateState(void);


// resolution/orientation handling

void    UnityGetRenderingResolution(unsigned* w, unsigned* h);
void    UnityGetSystemResolution(unsigned* w, unsigned* h);

void    UnityRequestRenderingResolution(unsigned w, unsigned h);

typedef enum ScreenOrientation
{
    orientationUnknown,

    portrait,
    portraitUpsideDown,
    landscapeLeft,
    landscapeRight,

    orientationCount,
}
ScreenOrientation;

typedef enum
{
    kUnityOrientationRequested = 1,
    kUnityShouldAutorotate = 1 << 1,
    kUnityAutorotationChanged = 1 << 2,
    kUnityAllowedOrientationChanged = 1 << 3,
} UnityOrientationRequestFlags;

typedef enum
{
    PortraitMask = 1 << portrait,
    PortraitUpsideDownMask = 1 << portraitUpsideDown,
    LandscapeLeftMask = 1 << landscapeLeft,
    LandscapeRightMask = 1 << landscapeRight,
} ScreenOrientationMask;

typedef struct UnityOrientationOptions
{
#ifdef __cplusplus
    bool HasFlag(UnityOrientationRequestFlags flag) const
    {
        return flags & flag;
    }

    bool OrientationRequested() const
    {
        return HasFlag(kUnityOrientationRequested);
    }

    bool ShouldAutorotate() const
    {
        return HasFlag(kUnityShouldAutorotate);
    }

    bool AutorotationChanged() const
    {
        return HasFlag(kUnityAutorotationChanged);
    }

    bool AllowedOrientationsChanged() const
    {
        return HasFlag(kUnityAllowedOrientationChanged);
    }

    bool AreOrientationsEnabled(ScreenOrientationMask mask) const
    {
        if (!HasFlag(kUnityShouldAutorotate))
            return false;
        return mask == (allowedOrientations & mask);
    }

    ScreenOrientation GetScreenOrientation() const
    {
        assert(ShouldAutorotate() == false);
        return (ScreenOrientation)allowedOrientations;
    }
private:
#endif
    unsigned flags;
    unsigned allowedOrientations;
} UnityOrientationOptions;

UnityOrientationOptions UnityGetOrientationOptions();
void    UnityOrientationRequestWasCommitted(void);

int     UnityReportResizeView(unsigned w, unsigned h, unsigned /*ScreenOrientation*/ contentOrientation);   // returns ScreenOrientation
void    UnityReportSafeAreaChange(float x, float y, float w, float h);
void    UnityReportBackbufferChange(UnityRenderBufferHandle colorBB, UnityRenderBufferHandle depthBB);
void    UnityReportDisplayCutouts(const float* x, const float* y, const float* width, const float* height, int count);

// player settings

int     UnityDisableDepthAndStencilBuffers(void);
int     UnityUseAnimatedAutorotation(void) __attribute__((deprecated("Not supported by iOS since version 16")));
int     UnityGetDesiredMSAASampleCount(int defaultSampleCount);
int     UnityGetSRGBRequested(void);
int     UnityGetWideColorRequested(void);
void    UnitySetEDRValues(float maxEDRValue, float currentEDRValue);
void    UnitySetHDRMode(int hdrMode);
int     UnityGetHDRModeRequested(void);
int     UnityGetAccelerometerFrequency(void);
int     UnityGetUseCustomAppBackgroundBehavior(void);
int     UnityMetalFramebufferOnly(void);
int     UnityMetalMemorylessDepth(void);
int     UnityPreserveFramebufferAlpha(void);

// native events

void    UnityInvalidateDisplayDataCache(void* screen);
void    UnityUpdateDisplayListCache(void** screens, int screenCount);

// profiler

void*   UnityCreateProfilerCounter(const char*);
void    UnityDestroyProfilerCounter(void*);
void    UnityStartProfilerCounter(void*);
void    UnityEndProfilerCounter(void*);


// sensors

void    UnitySensorsSetGyroRotationRate(int idx, float x, float y, float z);
void    UnitySensorsSetGyroRotationRateUnbiased(int idx, float x, float y, float z);
void    UnitySensorsSetGravity(int idx, float x, float y, float z);
void    UnitySensorsSetUserAcceleration(int idx, float x, float y, float z);
void    UnitySensorsSetAttitude(int idx, float x, float y, float z, float w);
void    UnityDidAccelerate(float x, float y, float z, double timestamp);
void    UnitySetJoystickPosition(int joyNum, int axis, float pos);
int     UnityStringToKey(const char *name);
void    UnitySetKeyState(int key, int /*bool*/ state);
void    UnitySetKeyboardKeyState(int key, int /*bool*/ state);
void    UnitySendKeyboardCommand(UIKeyCommand* command, int code);
int     UnityShouldAdjustPerformanceOnThermalStateChange();
int     UnityGetThermalStateSeriousFPS();
int     UnityGetThermalStateCriticalFPS();
void    UnityThermalStateChanged(int state);

// AVCapture

void    UnityReportAVCapturePermission(void* userData);
void    UnityDidCaptureVideoFrame(intptr_t tex, void* udata);

// logging override

#ifdef __cplusplus
} // extern "C"
#endif


//
// these are functions referenced and implemented in trampoline
//

#ifdef __cplusplus
extern "C" {
#endif

// UnityAppController.mm
UIViewController*       UnityGetGLViewController(void);
UIView*                 UnityGetGLView(void);
UnityView*              UnityGetUnityView(void);
UIWindow*               UnityGetMainWindow(void);
enum ScreenOrientation  UnityCurrentOrientation(void);

// Unity/DisplayManager.mm
#if !PLATFORM_VISIONOS
float                   UnityScreenScaleFactor(UIScreen* screen);
#endif

// DeviceInfo.cpp
bool UnityDeviceHasCutout(void);
CGSize UnityGetCutoutToScreenRatio();

#ifdef __cplusplus
} // extern "C"
#endif


//
// these are functions referenced in unity player lib and implemented in trampoline
//

#ifdef __cplusplus
extern "C" {
#endif

// iPhone_Sensors.mm
void            UnityInitJoysticks(void);
void            UnityCoreMotionStart(void);
void            UnityCoreMotionStop(void);
void            UnityUpdateAccelerometerData(void);
int             UnityIsGyroEnabled(int idx);
int             UnityIsGyroAvailable(void);
void            UnityUpdateGyroData(void);
void            UnitySetGyroUpdateInterval(int idx, float interval);
float           UnityGetGyroUpdateInterval(int idx);
void            UnityUpdateJoystickData(void);
NSArray*        UnityGetJoystickNames(void);
void            UnityGetJoystickAxisName(int idx, int axis, char* buffer, int maxLen);
void            UnityGetNiceKeyname(int key, char* buffer, int maxLen);

// UnityAppController+Rendering.mm
void            UnityGfxInitedCallback(void);
void            UnityFramerateChangeCallback(int targetFPS);
void            UnitySelectRenderingAPI(void);
int             UnitySelectedRenderingAPI(void);
int             UnityIsBatchmode(void);
int             UnityShouldRunInBackground(void);

NSBundle*           UnityGetMetalBundle(void);
MTLDeviceRef        UnityGetMetalDevice(void);
MTLCommandQueueRef  UnityGetMetalCommandQueue(void);
int UnityCommandQueueMaxCommandBufferCountMTL(void);

// deprecated, soon to be removed
MTLCommandQueueRef  UnityGetMetalDrawableCommandQueue(void);

int             UnityIsWideColorSupported(void);

// UI/ActivityIndicator.mm
void            UnityStartActivityIndicator(void);
void            UnityStopActivityIndicator(void);


// Unity/AVCapture.mm
int             UnityGetAVCapturePermission(int captureTypes);
void            UnityRequestAVCapturePermission(int captureTypes, void* userData);

// Unity/CameraCapture.mm
void            UnityEnumVideoCaptureDevices(void* udata, void(*callback)(void* udata, const char* name, int frontFacing, int autoFocusPointSupported, int kind, const int* resolutions, int resCount));
void*           UnityInitCameraCapture(int device, int w, int h, int fps, int isDepth, void* udata);
void            UnityStartCameraCapture(void* capture);
void            UnityPauseCameraCapture(void* capture);
void            UnityStopCameraCapture(void* capture);
void            UnityCameraCaptureExtents(void* capture, int* w, int* h);
void            UnityCameraCaptureReadToMemory(void* capture, void* dst, int w, int h);
int             UnityCameraCaptureVideoRotationDeg(void* capture);
int             UnityCameraCaptureVerticallyMirrored(void* capture);
int             UnityCameraCaptureSetAutoFocusPoint(void* capture, float x, float y);

// Unity/DisplayManager.mm
void            UnityActivateScreenForRendering(void* nativeDisplay);
void            UnityDestroyUnityRenderSurfaces(void);
int             UnityMainScreenRefreshRate(void);

// Unity/Filesystem.mm
const char*     UnityDataBundleDir(void);
void            UnitySetDataBundleDirWithBundleId(const char * bundleId);
const char*     UnityDocumentsDir(void);
const char*     UnityLibraryDir(void);
const char*     UnityCachesDir(void);
int             UnityUpdateNoBackupFlag(const char* path, int setFlag); // Returns 1 if successful, otherwise 0

// Unity/FullScreenVideoPlayer.mm
int             UnityIsFullScreenPlaying(void);
void            TryResumeFullScreenVideo(void);

//Apple TV Remote
int         UnityGetAppleTVRemoteAllowExitToMenu(void);
void        UnitySetAppleTVRemoteAllowExitToMenu(int val);
int         UnityGetAppleTVRemoteAllowRotation(void);
void        UnitySetAppleTVRemoteAllowRotation(int val);
int         UnityGetAppleTVRemoteReportAbsoluteDpadValues(void);
void        UnitySetAppleTVRemoteReportAbsoluteDpadValues(int val);
int         UnityGetAppleTVRemoteTouchesEnabled(void);
void        UnitySetAppleTVRemoteTouchesEnabled(int val);

// Runtime analytics
void UnitySendEmbeddedLaunchEvent(int launchType); // Tracks events when application is launched from native host app (Unity as a Library)

#ifdef __cplusplus
} // extern "C"
#endif


#ifdef __OBJC__
// This is basically a wrapper for [NSString UTF8String] with additional strdup.
//
// Apparently multiple calls on UTF8String will leak memory (NSData objects) that are collected
// only when @autoreleasepool is exited. This function serves as documentation for this and as a
// handy wrapper.
inline char* AllocCString(NSString* value)
{
    if (value == nil)
        return 0;

    const char* str = [value UTF8String];
    return str ? strdup(str) : 0;
}

#endif
