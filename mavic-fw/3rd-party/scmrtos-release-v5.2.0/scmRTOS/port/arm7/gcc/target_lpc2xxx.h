//******************************************************************************
//*
//*     FULLNAME:  Single-Chip Microcontroller Real-Time Operating System
//*
//*     NICKNAME:  scmRTOS
//*
//*     PROCESSOR: LPC2xxx (NXP)
//*
//*     TOOLKIT:   ARM GCC
//*
//*     PURPOSE:   Target Dependent Stuff Header. Declarations And Definitions
//*
//*     Version: v5.2.0
//*
//*
//*     Copyright (c) 2003-2021, scmRTOS Team
//*
//*     Permission is hereby granted, free of charge, to any person
//*     obtaining  a copy of this software and associated documentation
//*     files (the "Software"), to deal in the Software without restriction,
//*     including without limitation the rights to use, copy, modify, merge,
//*     publish, distribute, sublicense, and/or sell copies of the Software,
//*     and to permit persons to whom the Software is furnished to do so,
//*     subject to the following conditions:
//*
//*     The above copyright notice and this permission notice shall be included
//*     in all copies or substantial portions of the Software.
//*
//*     THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
//*     EXPRESS  OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
//*     MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
//*     IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
//*     CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
//*     TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH
//*     THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//*
//*     =================================================================
//*     Project sources: https://github.com/scmrtos/scmrtos
//*     Documentation:   https://github.com/scmrtos/scmrtos/wiki/Documentation
//*     Wiki:            https://github.com/scmrtos/scmrtos/wiki
//*     Sample projects: https://github.com/scmrtos/scmrtos-sample-projects
//*     =================================================================
//*
//******************************************************************************
//*     ARM port by Sergey A. Borshch, Copyright (c) 2006-2021
//*     lpc2xxx gcc port by Anton Gusev, Copyright (c) 2010-2021

#ifndef TARGET_LPC2XXX_H__
#define TARGET_LPC2XXX_H__

#ifndef __ASSEMBLER__

#if scmRTOS_CONTEXT_SWITCH_SCHEME == 1 && !defined(GCC_IRQ_PATCH_REQUIRED)
	#define OS_INTERRUPT   __attribute__((interrupt("IRQ")))
#else
	#define OS_INTERRUPT
#endif

#if scmRTOS_CONTEXT_SWITCH_SCHEME == 1
namespace OS
{
    INLINE void raise_context_switch()
    {
        VICSoftInt = (1<<CONTEXT_SWITCH_INT);
    }
}
#endif

INLINE void IRQ_DONE()
{
    VICVectAddr = 0;  // Reset VIC logic
}

#define SYSTEM_TIMER_HANDLER()  \
    do                          \
    {                           \
        RESET_SYSTIMER_INT();   \
        system_timer_handler(); \
    }                           \
    while(0)

#else   //__ASSEMBLER__

#if scmRTOS_CONTEXT_SWITCH_SCHEME == 0
        .macro  IRQ_SWITCH
        LDR     R1,=VICVectAddr
        MOV     LR, PC
        LDR     PC,[R1]
        .endm
#else   // scmRTOS_CONTEXT_SWITCH_SCHEME == 1
        .macro  IRQ_SWITCH
        LDR     PC, VICVectAddr
        .endm

        .macro  IRQ_DONE
        LDR     R1, =(VIC_BASE_ADDR)
        MOV     R2, #(1 << CONTEXT_SWITCH_INT)
        STR     R2, [R1, #(VICSoftIntClr - VIC_BASE_ADDR)]  // VICSoftIntClr = 1 << CONTEXT_SWITCH_INT; (clear soft int request)
        STR     R1, [R1, #(VICVectAddr - VIC_BASE_ADDR)]    // VICVectAddr = smth; (reset VIC)
        .endm
#endif  // scmRTOS_CONTEXT_SWITCH_SCHEME

#endif  //__ASSEMBLER__

#endif  // TARGET_LPC2XXX_H__
