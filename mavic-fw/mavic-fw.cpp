#include "inc/led-beacon.hpp"
#include "inc/uart-stdio.hpp"

#include <utility>

int main() {
  initialize_uart_stdio(Baudrate::BAUD_57600);

  MAVIC_LOG(
    "                                           \n"
    "   M   M                                   \n"
    "   MM MM                                   \n"
    "   M M M eee  ccc  aa nnn  u  u mmmm       \n"
    "   M   M e e c    a a n  n u  u m m m      \n"
    "   M   M ee   ccc aaa n  n  uuu m m m      \n"
    "                                           \n"
    "    AA  V     V RRRR      III  22   CCC    \n"
    "   A  A V     V R   R      I  2  2 C       \n"
    "   AAAA  V   V  RRRR       I    2  C       \n"
    "   A  A   V V   R R        I   2   C       \n"
    "   A  A    V    R  RR     III 2222  CCC    \n"
    "                                           \n"
    "    CCC           t          l l           \n"
    "   C              t          l l           \n"
    "   C    ooo nnn  ttt rrr ooo l l eee rrr   \n"
    "   C    o o n  n  t  r   o o l l e e r     \n"
    "    CCC ooo n  n  tt r   ooo l l ee  r     \n"
    "                                           \n"
  );

  MAVIC_LOG("mavic initialized");

  while (true) {
    auto beacon = mavic::LedBeacon{};
    auto moved  = std::move(beacon);
  }
}
