#include "inc/led-beacon.hpp"
#include "inc/mavic-utils.hpp"

#include <avr/io.h>
#include <avr/sfr_defs.h>
#include <util/delay.h>

#include <chrono>

namespace {

using Milliseconds = std::chrono::duration<double, std::milli>;

constexpr auto BEACON_PERIOD_SEC = 1.5;
constexpr auto BEACON_PIN_MASK   = _BV(PORTB5);

constexpr auto BEACON_PERIOD_MS = Milliseconds{BEACON_PERIOD_SEC * 1e3};
constexpr auto HI_PERIOD_MS     = Milliseconds{25.0};
constexpr auto LO_PERIOD_MS     = BEACON_PERIOD_MS - HI_PERIOD_MS;

inline auto pin_initialize() noexcept -> void;
inline auto pin_set_hi(Milliseconds delay_ms) noexcept -> void;
inline auto pin_set_lo(Milliseconds delay_ms) noexcept -> void;

inline auto sleep_for(Milliseconds milliseconds) noexcept -> void;

} // namespace

namespace mavic {

LedBeacon::LedBeacon() noexcept {
  pin_initialize();
  pin_set_hi(HI_PERIOD_MS);
}

LedBeacon::~LedBeacon() noexcept {
  if (m_is_moved) {
    return;
  }
  pin_set_lo(LO_PERIOD_MS);
}

LedBeacon::LedBeacon(LedBeacon&& other) noexcept {
  other.m_is_moved = true;
}

LedBeacon& LedBeacon::operator=(LedBeacon&& rhs) noexcept {
  rhs.m_is_moved = true;
  return (*this);
}

} // namespace mavic

namespace {

auto pin_initialize() noexcept -> void {
  DDRB |= BEACON_PIN_MASK;
}

auto pin_set_hi(const Milliseconds delay_ms) noexcept -> void {
  PORTB |= BEACON_PIN_MASK;
  sleep_for(delay_ms);
}

auto pin_set_lo(const Milliseconds delay_ms) noexcept -> void {
  PORTB &= (~BEACON_PIN_MASK);
  sleep_for(delay_ms);
}

auto sleep_for(const Milliseconds milliseconds) noexcept -> void {
  _delay_ms(milliseconds.count());
}

} // namespace

static_assert(is_supported_mcu(), "Verify special function registers");
