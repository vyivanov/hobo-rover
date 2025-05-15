git clone --recurse-submodules git@github.com:vyivanov/hobo-rover.git

avrdude -c usbasp -p m328pb -U flash:w:optiboot_atmega328.hex
avrdude -c arduino -P /dev/ttyUSB0 -p m328p -U flash:w:mavic-fw/build/mavic-fw.atmega328pb.16mhz.ihex
