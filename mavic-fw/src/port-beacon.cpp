#include "inc/port-beacon.hpp"

#include <avr/io.h>
#include <avr/sfr_defs.h>
#include <util/delay.h>

namespace {

constexpr auto BEACON_PERIOD_SEC = 1.5F;
constexpr auto BEACON_PIN_MASK   = _BV(PORTB5);

constexpr auto TOTAL_PERIOD_MS = BEACON_PERIOD_SEC * 1'000;
constexpr auto HIGH_PERIOD_MS  = 25.F;
constexpr auto LOW_PERIOD_MS   = TOTAL_PERIOD_MS - HIGH_PERIOD_MS;

inline void pin_initialize();
inline void pin_set_hi(float delay_ms);
inline void pin_set_lo(float delay_ms);

} // namespace

namespace mavic {

PortBeacon::PortBeacon() {
  pin_initialize();
  pin_set_hi(HIGH_PERIOD_MS);
}

PortBeacon::~PortBeacon() noexcept {
  if (m_is_moved) {
    return;
  }
  pin_set_lo(LOW_PERIOD_MS);
}

PortBeacon::PortBeacon(PortBeacon&& other) noexcept {
  other.m_is_moved = true;
}

PortBeacon& PortBeacon::operator=(PortBeacon&& rhs) noexcept {
  rhs.m_is_moved = true;
  return (*this);
}

} // namespace mavic

namespace {

void pin_initialize() {
  DDRB |= BEACON_PIN_MASK;
}

void pin_set_hi(const float delay_ms) {
  PORTB |= BEACON_PIN_MASK;
  _delay_ms(delay_ms);
}

void pin_set_lo(const float delay_ms) {
  PORTB &= (~BEACON_PIN_MASK);
  _delay_ms(delay_ms);
}

} // namespace
