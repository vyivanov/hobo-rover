#pragma once

namespace mavic {

/**
 * @brief Abstraction to toggle dedicated LED in RAII style.
 */
class LedBeacon final {
  public:

  /**
   * @brief Turn on a LED with hardcoded delay A.
   */
  LedBeacon() noexcept;

  /**
   * @brief Turn off a LED with hardcoded delay B.
   */
  ~LedBeacon() noexcept;

  LedBeacon(const LedBeacon& other) = delete;
  LedBeacon(LedBeacon&& other) noexcept;

  LedBeacon& operator=(const LedBeacon& rhs) = delete;
  LedBeacon& operator=(LedBeacon&& rhs) noexcept;

  private:

  bool m_is_moved{false};
};

} // namespace mavic
