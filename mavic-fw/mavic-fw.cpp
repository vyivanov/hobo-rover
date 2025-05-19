#include "inc/led-beacon.hpp"

int main() {
  while (true) {
    auto beacon = mavic::LedBeacon{};
    auto moved  = static_cast<mavic::LedBeacon&&>(beacon);
  }
}
