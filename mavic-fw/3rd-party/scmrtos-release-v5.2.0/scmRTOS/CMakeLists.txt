project(scmrtos LANGUAGES ASM C CXX DESCRIPTION "Real-Time Preemptive Operating System"
  HOMEPAGE_URL "https://github.com/scmrtos/scmrtos, tag-v5.2.0")

add_library(${PROJECT_NAME} STATIC
  core/os_kernel.cpp
  core/os_services.cpp
  core/usrlib.cpp
  port/avr/gcc/os_target_asm.S
  port/avr/gcc/os_target.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC core/ port/avr/gcc/)
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
