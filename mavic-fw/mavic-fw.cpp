#include "inc/led-beacon.hpp"
#include "inc/mavic-constants.hpp"
#include "inc/os-config/start-os.hpp"
#include "inc/uart-stdio.hpp"

#include <scmRTOS.h>

#include <utility>

int main() {
  initialize_uart_stdio(Baudrate::BAUD_57600);

  MAVIC_LOG(MAVIC_LOGO);
  MAVIC_LOG("mavic initialized");

  start_os();
}

// TODO: Move to separate translation unit.

using LedBeaconProc   = OS::process<OS::pr0, 64, OS::pssRunning>;
const auto led_beacon = LedBeaconProc{"led-beacon"};

void sleep_cb(const mavic::LedBeacon::SleepMs& sleep_ms) noexcept {
  OS::sleep(sleep_ms.count());
}

template <>
OS_PROCESS void LedBeaconProc::exec() {
  while (true) {
    auto beacon = mavic::LedBeacon{sleep_cb};
    auto moved  = std::move(beacon);
  }
}
