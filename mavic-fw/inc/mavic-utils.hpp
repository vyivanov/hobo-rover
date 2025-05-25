#pragma once

#include <string_view>

/**
 * Detect whether specified MCU is supported.
 *
 * @return 'true' if yes, 'false' otherwise.
 */
consteval bool is_supported_mcu() {
  using namespace std::string_view_literals;

  return ("atmega328pb"sv == MCU_PART_NUMBER);
}

/**
 * Detect whether specified frequency is supported.
 *
 * @return 'true' if yes, 'false' otherwise.
 */
consteval bool is_supported_freq() {
  return (16 == MCU_FREQ_MHZ);
}
