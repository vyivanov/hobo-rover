project(c++std LANGUAGES CXX DESCRIPTION "Hand crafted STL and C++ standard library")

add_library(${PROJECT_NAME} STATIC
  std_basic_ios.cpp
  std_istream.cpp
  std_ostream.cpp
  std_streambuf.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_LIST_DIR})
target_compile_options(${PROJECT_NAME} PRIVATE
  -std=c++20
  -Wall
  -Werror
  -Wpedantic)
