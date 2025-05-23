#include "inc/led-beacon.hpp"
#include "inc/mavic-utils.hpp"

#include <avr/io.h>
#include <avr/sfr_defs.h>
#include <util/delay.h>

#include <chrono>
#include <type_traits>

namespace {

using Milliseconds = std::chrono::duration<double, std::milli>;

using SleepMs = mavic::LedBeacon::SleepMs;
using SleepCb = mavic::LedBeacon::SleepCb;

static_assert(std::is_same_v<Milliseconds, SleepMs>);

constexpr auto BEACON_PERIOD_SEC = 1.5;
constexpr auto BEACON_PIN_MASK   = _BV(PORTB5);

constexpr auto BEACON_PERIOD_MS = Milliseconds{BEACON_PERIOD_SEC * 1e3};
constexpr auto HI_PERIOD_MS     = Milliseconds{25.0};
constexpr auto LO_PERIOD_MS     = BEACON_PERIOD_MS - HI_PERIOD_MS;

inline void pin_initialize() noexcept;
inline void pin_set_hi(const SleepMs& sleep_ms, const SleepCb& sleep_cb) noexcept;
inline void pin_set_lo(const SleepMs& sleep_ms, const SleepCb& sleep_cb) noexcept;

} // namespace

namespace mavic {

LedBeacon::LedBeacon(SleepCb sleep_cb) noexcept : m_sleep_cb{sleep_cb} {
  pin_initialize();
  pin_set_hi(HI_PERIOD_MS, m_sleep_cb);
}

LedBeacon::~LedBeacon() noexcept {
  if (not m_sleep_cb) {
    return;
  }
  pin_set_lo(LO_PERIOD_MS, m_sleep_cb);
}

LedBeacon::LedBeacon(LedBeacon&& other) noexcept : m_sleep_cb(other.m_sleep_cb) {
  other.m_sleep_cb = nullptr;
}

LedBeacon& LedBeacon::operator=(LedBeacon&& rhs) noexcept {
  m_sleep_cb     = rhs.m_sleep_cb;
  rhs.m_sleep_cb = nullptr;

  return (*this);
}

} // namespace mavic

namespace {

void pin_initialize() noexcept {
  DDRB |= BEACON_PIN_MASK;
}

void pin_set_hi(const SleepMs& sleep_ms, const SleepCb& sleep_cb) noexcept {
  PORTB |= BEACON_PIN_MASK;
  sleep_cb(sleep_ms);
}

void pin_set_lo(const SleepMs& sleep_ms, const SleepCb& sleep_cb) noexcept {
  PORTB &= (~BEACON_PIN_MASK);
  sleep_cb(sleep_ms);
}

} // namespace

static_assert(is_supported_mcu(), "Verify special function registers");
