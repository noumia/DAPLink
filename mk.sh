set -euxo pipefail

rm -rf projectfiles
rm -f *.hex
rm -f *.bin

progen generate -t cmake_gcc_arm -o generator=ninja -p lpc11u35_ae_if -b

progen generate -t cmake_gcc_arm -o generator=ninja -p stm32f103xb_bl -b
progen generate -t cmake_gcc_arm -o generator=ninja -p stm32f103xb_if -b

progen generate -t cmake_gcc_arm -o generator=ninja -p lpc55s69_mculink_bl -b
progen generate -t cmake_gcc_arm -o generator=ninja -p lpc55s69_mculink_if -b

fd -g -I *_crc.hex -x busybox cp {} .
fd -g -I *_crc.bin -x busybox cp {} .
