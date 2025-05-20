project(stdcpp LANGUAGES CXX DESCRIPTION "Hand crafted STL and C++ standard library"
  HOMEPAGE_URL "https://github.com/modm-io/avr-libstdcpp, sha-123a0d7")

add_library(${PROJECT_NAME} STATIC
  src/functexcept.cc
  src/hash_bytes.cc
  src/hashtable_c++0x.cc
  src/limits.cc
  src/list.cc
  src/math.cc
  src/new_handler.cc
  src/tree.cc)

target_include_directories(${PROJECT_NAME} PUBLIC include)
target_compile_options(${PROJECT_NAME} PRIVATE
  -std=c++20
  -O3
  -Wall
  -Wextra
  -Werror
  -Wpedantic)
