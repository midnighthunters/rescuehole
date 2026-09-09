#pragma once

#include "UnityForwardDecls.h"
#include "UnityAppController.h"

@interface UnityAppController (Thermal)

- (void)subscribeToThermalChanges;
- (int)adjustFrameRateForThermalState:(int)targetFPS;

@end
