//******************************************************************************
//*
//*     FULLNAME:  Single-Chip Microcontroller Real-Time Operating System
//*
//*     NICKNAME:  scmRTOS
//*
//*     PURPOSE:  Process Profiler definitions
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
//*****************************************************************************
//*     Profiler extension by Harry E. Zhurov, Copyright (c) 2012-2021


#ifndef PROFILER_H
#define PROFILER_H

#include <scmRTOS.h>

//------------------------------------------------------------------------------
template < uint_fast8_t sum_shift_bits = 0 >
class TProfiler : public OS::TKernelAgent
{
    uint32_t time_interval();
public:
    INLINE TProfiler();

    INLINE void advance_counters()
    {
        uint32_t Elapsed = time_interval();
        Counter[ cur_proc_priority() ] += Elapsed;
    }

    INLINE uint16_t get_result(uint_fast8_t index) { return Result[index]; }
    INLINE void     process_data();

protected:
    volatile uint32_t  Counter[OS::PROCESS_COUNT];
             uint16_t  Result [OS::PROCESS_COUNT];
};
//------------------------------------------------------------------------------
template < uint_fast8_t sum_shift_bits >
TProfiler<sum_shift_bits>::TProfiler()
    : Counter (   )
    , Result  (   )
{
}

template < uint_fast8_t sum_shift_bits >
void TProfiler<sum_shift_bits>::process_data()
{
    // Use cache to make critical section fast as possible
    uint32_t CounterCache[OS::PROCESS_COUNT];
    {
        TCritSect cs;
        for(uint_fast8_t i = 0; i < OS::PROCESS_COUNT; ++i)
        {
            CounterCache[i] = Counter[i];
            Counter[i]       = 0;
        }
    }

    uint32_t Sum = 0;
    for(uint_fast8_t i = 0; i < OS::PROCESS_COUNT; ++i)
    {
        Sum += CounterCache[i];
    }
    Sum >>=  sum_shift_bits;

    const uint32_t K = 10000;
    for(uint_fast8_t i = 0; i < OS::PROCESS_COUNT; ++i)
    {
        Result[i]  = (CounterCache[i] >> sum_shift_bits) * K / Sum;
    }
}
//------------------------------------------------------------------------------

#endif  // PROFILER_H

