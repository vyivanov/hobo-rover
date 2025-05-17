find_program(CROSS_CC avr-gcc REQUIRED)
find_program(CROSS_CXX avr-g++ REQUIRED)
find_program(CROSS_OBJCOPY avr-objcopy REQUIRED)
find_program(CROSS_OBJDUMP avr-objdump REQUIRED)

set(CMAKE_C_COMPILER ${CROSS_CC})
set(CMAKE_CXX_COMPILER ${CROSS_CXX})
