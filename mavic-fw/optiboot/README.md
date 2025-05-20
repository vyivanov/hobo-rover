Burn arduino compatible [bootloader](https://github.com/Optiboot/optiboot) and program fuse bits:

```bash
avrdude -c usbasp -p atmega328pb -e   \
  -U flash:w:optiboot_atmega328.hex:i \
  -U lfuse:w:0xFF:m                   \
  -U hfuse:w:0xDE:m                   \
  -U efuse:w:0xFE:m
```
