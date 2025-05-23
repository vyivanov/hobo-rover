#pragma once

#include <avr/pgmspace.h>

#include <scmRTOS.h>

#include <cstdint>
#include <cstdio>

/**
 * @brief Supported hardware speeds.
 */
enum struct Baudrate : uint8_t {
  BAUD_300 = 0,
  BAUD_1200,
  BAUD_2400,
  BAUD_4800,
  BAUD_9600,
  BAUD_19200,
  BAUD_38400,
  BAUD_57600,
};

/**
 * @brief Configure UART hardware and link to standard I/O functionality.
 *        Should be called before first I/O operation.
 *
 * @param [in] baud_rate Communication speed in baud.
 */
void initialize_uart_stdio(Baudrate baud_rate) noexcept;

/**
 * @brief Synchronization primitive to protect concurrent access to hardware.
 */
inline OS::TMutex uart_mtx;

/**
 * @def MAVIC_LOG(fmt, ...)
 *      Send formatted string @a fmt to hardware.
 */
#define MAVIC_LOG(fmt, ...)                  \
  {                                          \
    auto raii = OS::TScopedLock{uart_mtx};   \
    printf_P(PSTR(fmt "\n"), ##__VA_ARGS__); \
  }
