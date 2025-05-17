namespace mavic {

class PortBeacon final {
  public:

  PortBeacon();
  ~PortBeacon() noexcept;

  PortBeacon(const PortBeacon& other) = delete;
  PortBeacon(PortBeacon&& other) noexcept;

  PortBeacon& operator=(const PortBeacon& rhs) = delete;
  PortBeacon& operator=(PortBeacon&& rhs) noexcept;

  private:

  bool m_is_moved{false};
};

} // namespace mavic
