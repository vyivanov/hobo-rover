find_program(CROSS_CXX avr-g++ REQUIRED)
find_program(CROSS_OBJCOPY avr-objcopy REQUIRED)
find_program(CROSS_OBJDUMP avr-objdump REQUIRED)
find_program(CROSS_AVRDUDE avrdude REQUIRED)

set(CMAKE_CXX_COMPILER ${CROSS_CXX})

function(target_burn_artifacts target dummy mcu freq port)
  set(OUT_FILENAME ${target}.${mcu}.${freq}mhz)

  add_custom_target(
    ihex
    COMMAND ${CROSS_OBJCOPY} -j .text -j .data -O ihex ${target}.elf
            ${OUT_FILENAME}.ihex
    DEPENDS ${target}
    COMMENT "Extract HEX-file (Intel) from ELF")

  add_custom_target(
    map
    COMMAND ${CROSS_OBJDUMP} -stx -CS ${target}.elf > ${OUT_FILENAME}.map
    DEPENDS ${target}
    COMMENT "Extract MAP-file from ELF")

  add_custom_target(
    fw
    COMMAND ${CROSS_OBJDUMP} -Pmem-usage ${target}.elf
    DEPENDS ${target} ihex map)

  add_custom_target(
    bld
    COMMAND ${CROSS_AVRDUDE} -F -c arduino -p ${mcu} -P ${port} -U
            flash:w:${OUT_FILENAME}.ihex:i
    DEPENDS fw)
endfunction()
