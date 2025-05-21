#include "inc/led-beacon.hpp"
#include "inc/mavic-constants.hpp"
#include "inc/uart-stdio.hpp"

#include <utility>

int main() {
  initialize_uart_stdio(Baudrate::BAUD_57600);

  MAVIC_LOG(MAVIC_LOGO);
  MAVIC_LOG("mavic initialized");

  while (true) {
    auto beacon = mavic::LedBeacon{};
    auto moved  = std::move(beacon);
  }
}
