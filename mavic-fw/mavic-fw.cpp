#include "inc/mavic-constants.hpp"
#include "inc/os-config/start-os.hpp"
#include "inc/uart-stdio.hpp"

int main() {
  initialize_uart_stdio(Baudrate::BAUD_57600);

  MAVIC_LOG(MAVIC_LOGO);
  MAVIC_LOG("mavic initialized");

  start_os();
}
