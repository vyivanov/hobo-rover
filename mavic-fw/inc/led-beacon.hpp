#pragma once

#include <chrono>

namespace mavic {

/**
 * @brief Abstraction to toggle dedicated LED in RAII style.
 */
class LedBeacon final {
  public:

  using SleepMs = std::chrono::duration<double, std::milli>;
  using SleepCb = void (*)(const SleepMs&);

  /**
   * @brief Turn on a LED with hardcoded delay A.
   *
   * @param sleep_cb Actual sleep functionality.
   */
  explicit LedBeacon(SleepCb sleep_cb) noexcept;

  /**
   * @brief Turn off a LED with hardcoded delay B.
   */
  ~LedBeacon() noexcept;

  LedBeacon(const LedBeacon& other) = delete;
  LedBeacon(LedBeacon&& other) noexcept;

  LedBeacon& operator=(const LedBeacon& rhs) = delete;
  LedBeacon& operator=(LedBeacon&& rhs) noexcept;

  private:

  SleepCb m_sleep_cb;
};

} // namespace mavic
