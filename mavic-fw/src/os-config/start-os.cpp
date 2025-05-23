#include "inc/os-config/start-os.hpp"
#include "inc/mavic-utils.hpp"

#include <avr/io.h>
#include <avr/sfr_defs.h>

#include <scmRTOS.h>

namespace {

void start_system_timer() noexcept;

}

void start_os() {
  start_system_timer();
  OS::run();
}

namespace {

void start_system_timer() noexcept {
  static_assert(is_supported_freq(), "Verify timer T0 (8 bit) overflow configuration: "
                                     "(1 / (F_CPU / F_T0) * 256) == 1.024 ms");

  TIMER0_CS_REG |= _BV(CS01) | _BV(CS00);
  TIMER0_IE_REG |= _BV(TOIE0);
}

} // namespace

namespace OS {

void system_timer_user_hook() {
  DDRD  |= _BV(DDRD2);
  PORTD ^= _BV(PORTD2);
}

} // namespace OS
