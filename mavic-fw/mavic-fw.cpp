#include "inc/port-beacon.hpp"

#include <utility>

int main() {
  while (true) {
    auto beacon = mavic::PortBeacon{};
    auto moved  = std::move(beacon);
  }
}
