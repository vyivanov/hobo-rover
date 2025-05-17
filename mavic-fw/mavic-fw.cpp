#include "inc/port-beacon.hpp"

int main() {
  while (true) {
    auto beacon = mavic::PortBeacon{};
    auto moved  = static_cast<mavic::PortBeacon&&>(beacon);
  }
}
