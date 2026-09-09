#pragma once

#include <stdint.h>
#include "UnityInternalInterface.h"

#ifdef __OBJC__
@class NSArray;
@class NSBundle;
@class NSData;
@class NSDictionary;
@class NSError;
@class NSSet;
@class NSString;
@class UIEvent;
@class UIKeyCommand;
@class UIScreen;
@class UITouch;
@class UIView;
@class UIViewController;
@class UIWindow;

@class UnityView;
@class UnityViewControllerBase;
#else
typedef struct objc_object NSArray;
typedef struct objc_object NSBundle;
typedef struct objc_object NSData;
typedef struct objc_object NSDictionary;
typedef struct objc_object NSError;
typedef struct objc_object NSSet;
typedef struct objc_object NSString;
typedef struct objc_object UIEvent;
typedef struct objc_object UIKeyCommand;
typedef struct objc_object UIScreen;
typedef struct objc_object UITouch;
typedef struct objc_object UIView;
typedef struct objc_object UIViewController;
typedef struct objc_object UIWindow;

typedef struct objc_object UnityView;
typedef struct objc_object UnityViewControllerBase;
#endif

// misc
#ifdef __cplusplus
extern "C" {
    bool UnityiOS81orNewer();
    bool UnityiOS82orNewer();
    bool UnityiOS90orNewer();
    bool UnityiOS91orNewer();
    bool UnityiOS100orNewer();
    bool UnityiOS101orNewer();
    bool UnityiOS102orNewer();
    bool UnityiOS103orNewer();
    bool UnityiOS110orNewer();
    bool UnityiOS111orNewer();
    bool UnityiOS112orNewer();
    bool UnityiOS130orNewer();
    bool UnityiOS140orNewer();
    bool UnityiOS150orNewer();
    bool UnityiOS160orNewer();
}
#endif
