#pragma once

#ifndef __ASSEMBLER__
#include <stdint.h>
using timeout_t    = uint16_t;
using tick_count_t = uint_fast32_t;
#endif

#define scmRTOS_PROCESS_COUNT                     (1)
#define scmRTOS_PROCESS_RESTART_ENABLE            (0)
#define scmRTOS_SUSPENDED_PROCESS_ENABLE          (0)

#define scmRTOS_SYSTEM_TICKS_ENABLE               (0)
#define scmRTOS_SYSTEM_TICKS_ATOMIC               (0)
#define scmRTOS_SYSTIMER_HOOK_ENABLE              (1)
#define scmRTOS_SYSTIMER_NEST_INTS_ENABLE         (0)

#define scmRTOS_CONTEXT_SWITCH_SCHEME             (0)
#define scmRTOS_CONTEXT_SWITCH_USER_HOOK_ENABLE   (0)

#define scmRTOS_IDLE_HOOK_ENABLE                  (0)
#define scmRTOS_IDLE_PROCESS_STACK_SIZE           (64)

#define scmRTOS_USER_DEFINED_CRITSECT_ENABLE      (0)
#define scmRTOS_USER_DEFINED_STACK_PATTERN        (0xaaU)

#define scmRTOS_PRIORITY_ORDER                    (0)
#define scmRTOS_DEBUG_ENABLE                      (0)

#define scmRTOS_ISRW_TYPE                         TISRW
