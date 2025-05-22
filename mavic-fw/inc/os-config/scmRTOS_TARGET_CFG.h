#pragma once

#ifndef __ASSEMBLER__

#include <avr/io.h>
#include <avr/sfr_defs.h>

#define SYSTEM_TIMER_VECTOR         TIMER0_OVF_vect
#define TIMER0_IE_REG               TIMSK0
#define TIMER0_CS_REG               TCCR0B

#define LOCK_SYSTEM_TIMER()         (TIMER0_IE_REG &= ~_BV(TOIE0))
#define UNLOCK_SYSTEM_TIMER()       (TIMER0_IE_REG |=  _BV(TOIE0))

#define ENABLE_NESTED_INTERRUPTS()  sei()

#endif
