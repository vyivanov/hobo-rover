#include "inc/led-beacon.hpp"

#include <scmRTOS.h>

namespace {

using LedBeaconProc   = OS::process<OS::pr0, 64>;
const auto led_beacon = LedBeaconProc{"led-beacon"};

using LedBeacon = mavic::LedBeacon;
void sleep_cb(const LedBeacon::SleepMs& sleep_ms) noexcept;

} // namespace

template <>
OS_PROCESS void LedBeaconProc::exec() {
  while (true) {
    auto raii = LedBeacon{sleep_cb};
  }
}

namespace {

void sleep_cb(const LedBeacon::SleepMs& sleep_ms) noexcept {
  OS::sleep(sleep_ms.count());
}

} // namespace
