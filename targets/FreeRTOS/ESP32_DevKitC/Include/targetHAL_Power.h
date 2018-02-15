//
// Copyright (c) 2017 The nanoFramework project contributors
// See LICENSE file in the project root for full license information.
//

#ifndef _TARGET_HAL_POWER_H_
#define _TARGET_HAL_POWER_H_ 1

#include <esp32_os.h>
#include <nanoHAL_v2.h>

inline void CPU_Reset(){ esp_restart(); };
inline void CPU_Sleep(SLEEP_LEVEL_type level, uint64_t wakeEvents){ vTaskDelay(0); };

inline bool CPU_IsSoftRebootSupported() { return true; };

#endif //_TARGET_HAL_POWER_H_