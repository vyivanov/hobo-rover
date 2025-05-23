cmake_minimum_required(VERSION 3.25)

set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_LIST_DIR}/cmake/avr-gcc.toolchain.cmake)
set(CMAKE_EXPORT_COMPILE_COMMANDS YES)

project(mavic-fw LANGUAGES CXX DESCRIPTION "Mecanum AVR I2C Controller (mavic)")
add_executable(${PROJECT_NAME}
  mavic-fw.cpp
  src/led-beacon.cpp
  src/uart-stdio.cpp
  src/os-config/start-os.cpp)

set(MCU_PART_NUMBER atmega328pb CACHE STRING "Type of MCU to generate firmware for")
set(MCU_FREQ_MHZ 16 CACHE STRING "Target frequency the MCU is running on")
set(MCU_BOOTLOADER_PORT /dev/ttyUSB0 CACHE STRING "Serial port the MCU is connected to")

add_subdirectory(3rd-party)
target_include_directories(scmrtos PUBLIC inc/os-config/)

message(STATUS "MCU_PART_NUMBER     - ${MCU_PART_NUMBER}")
message(STATUS "MCU_FREQ_MHZ        - ${MCU_FREQ_MHZ}")
message(STATUS "MCU_BOOTLOADER_PORT - ${MCU_BOOTLOADER_PORT}")

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_LIST_DIR})
target_compile_definitions(${PROJECT_NAME} PRIVATE
  -DF_CPU=${MCU_FREQ_MHZ}*1e6
  -DMCU_PART_NUMBER="${MCU_PART_NUMBER}"
  -DMCU_FREQ_MHZ=${MCU_FREQ_MHZ})

target_compile_options(${PROJECT_NAME} PRIVATE
  -mmcu=${MCU_PART_NUMBER}
  -std=c++20
  -O3
  -fno-exceptions
  -fno-rtti
  -Wall
  -Wextra
  -Werror
  -Wpedantic
  -Wno-volatile)

target_link_libraries(${PROJECT_NAME} PRIVATE
  scmrtos
  stdcpp)

target_link_options(${PROJECT_NAME} PRIVATE
  -mmcu=${MCU_PART_NUMBER}
  -Wl,--trace)

set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME ${PROJECT_NAME}.elf)
target_burn_artifacts(${PROJECT_NAME} PRIVATE
  ${MCU_PART_NUMBER}
  ${MCU_FREQ_MHZ}
  ${MCU_BOOTLOADER_PORT})
