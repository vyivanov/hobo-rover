#include "inc/mavic-utils.hpp"
#include "inc/uart-stdio.hpp"

#include <avr/io.h>
#include <avr/sfr_defs.h>

#include <cstdint>
#include <cstdio>

namespace {

constexpr auto STATUS_SUCCESS = static_cast<int>(0);

constexpr auto WORD_MASK_LO_BYTE = static_cast<uint16_t>(0x00FF);
constexpr auto WORD_MASK_HI_BYTE = static_cast<uint16_t>(0xFF00);

void initialize_uart(Baudrate baud_rate) noexcept;
void initialize_stdio() noexcept;

int uart_putchar(char symbol, FILE* stream);
int uart_getchar(FILE* stream);

uint32_t to_number(Baudrate baudrate) noexcept;

} // namespace

void initialize_uart_stdio(const Baudrate baud_rate) noexcept {
  initialize_uart(baud_rate);
  initialize_stdio();
}

namespace {

void initialize_uart(const Baudrate baud_rate) noexcept {
  const uint16_t baud_prescale = F_CPU / 16 / to_number(baud_rate) - 1;

  UBRR0L = (baud_prescale & WORD_MASK_LO_BYTE) >> 0;
  UBRR0H = (baud_prescale & WORD_MASK_HI_BYTE) >> 8;

  UCSR0B = _BV(RXEN0)  | _BV(TXEN0);
  UCSR0C = _BV(UCSZ01) | _BV(UCSZ00);
}

void initialize_stdio() noexcept {
  static FILE uart_stdin  = FDEV_SETUP_STREAM(nullptr, uart_getchar, _FDEV_SETUP_READ);
  static FILE uart_stdout = FDEV_SETUP_STREAM(uart_putchar, nullptr, _FDEV_SETUP_WRITE);

  stdin = &uart_stdin;

  stdout = &uart_stdout;
  stderr = &uart_stdout;
}

int uart_putchar(const char symbol, FILE* const stream) {
  (void)stream;

  if (symbol == '\n') {
    uart_putchar('\r', nullptr);
  }

  loop_until_bit_is_set(UCSR0A, UDRE0);
  UDR0 = symbol;

  return STATUS_SUCCESS;
}

int uart_getchar(FILE* const stream) {
  (void)stream;

  // TODO: Implement reading from hardware.
  return 'x';
}

uint32_t to_number(const Baudrate baudrate) noexcept {
  auto number = uint32_t{9600UL};

  switch (baudrate) {
    case Baudrate::BAUD_300:
      number = 300UL;
      break;
    case Baudrate::BAUD_1200:
      number = 1200UL;
      break;
    case Baudrate::BAUD_2400:
      number = 2400UL;
      break;
    case Baudrate::BAUD_4800:
      number = 4800UL;
      break;
    case Baudrate::BAUD_9600:
      number = 9600UL;
      break;
    case Baudrate::BAUD_19200:
      number = 19200UL;
      break;
    case Baudrate::BAUD_38400:
      number = 38400UL;
      break;
    case Baudrate::BAUD_57600:
      number = 57600UL;
      break;
  }

  static_assert(is_supported_freq(), "Verify baud rates error");
  return number;
}

} // namespace

static_assert(is_supported_mcu(), "Verify special function registers");
