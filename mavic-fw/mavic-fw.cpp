#include "inc/led-beacon.hpp"

#include <utility>

int main() {
  while (true) {
    auto beacon = mavic::LedBeacon{};
    auto moved  = std::move(beacon);
  }
}
