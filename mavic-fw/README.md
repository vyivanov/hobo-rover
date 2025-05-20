Compile and burn firmware:

```bash
rm -rf build/ && cmake -GNinja -S./ -Bbuild/ && cmake --build build/ --verbose --target bld
```

Available CMake options at configuration stage:

- `-DMCU_PART_NUMBER` (e.g. `atmega328pb`)
- `-DMCU_FREQ_MHZ` (e.g. `16`)
- `-DMCU_BOOTLOADER_PORT` (e.g `/dev/ttyUSB0`)
