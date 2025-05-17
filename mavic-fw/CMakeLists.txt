cmake_minimum_required(VERSION 3.25)

set(CMAKE_TOOLCHAIN_FILE ${CMAKE_CURRENT_LIST_DIR}/cmake/avr-gcc.toolchain.cmake)
set(CMAKE_EXPORT_COMPILE_COMMANDS YES)

project(mavic-fw LANGUAGES CXX DESCRIPTION "Motor AVR I2C Controller (mavic)")
add_executable(${PROJECT_NAME}
  mavic-fw.cpp
  src/port-beacon.cpp)

set(MCU_PART_NUMBER atmega328pb CACHE STRING "Type of MCU to generate firmware for")
set(MCU_FREQ_MHZ 16 CACHE STRING "Target frequency the MCU is running on")

add_subdirectory(3rd-party)

message(STATUS "MCU_PART_NUMBER - ${MCU_PART_NUMBER}")
message(STATUS "MCU_FREQ_MHZ - ${MCU_FREQ_MHZ}")

target_include_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_LIST_DIR})
target_compile_definitions(${PROJECT_NAME} PRIVATE
  -DF_CPU=${MCU_FREQ_MHZ}*1e6)

target_compile_options(${PROJECT_NAME} PRIVATE
  -mmcu=${MCU_PART_NUMBER}
  -std=c++20
  -Os
  -ffunction-sections
  -fdata-sections)

target_link_libraries(${PROJECT_NAME} PRIVATE
  c++std)

add_custom_target(
  ihex
  COMMAND ${CROSS_OBJCOPY} -j .text -j .data -O ihex ${PROJECT_NAME}
          ${PROJECT_NAME}.${MCU_PART_NUMBER}.${MCU_FREQ_MHZ}mhz.ihex
  DEPENDS ${PROJECT_NAME}
  COMMENT "Extract Intel HEX from ELF")

add_custom_target(
  map
  COMMAND ${CROSS_OBJDUMP} -h -S -C ${PROJECT_NAME} > ${PROJECT_NAME}.map
  DEPENDS ${PROJECT_NAME})
