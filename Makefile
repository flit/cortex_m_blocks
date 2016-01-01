
CLANG = /Users/creed/projects/_third_party/llvm/build/bin/clang
GCC = /opt/gcc-arm-none-eabi-4_9-2015q3/bin/arm-none-eabi-gcc

TARGET = -mcpu=cortex-m0plus -mthumb
CFLAGS += -target arm-none-eabi $(TARGET) -std=c11 -O0 -g -nostdlib -ffreestanding -fblocks -fshort-enums
LFLAGS += --specs=rdimon.specs -Wl,-T,MKL28T512xxx7_CORE0_flash.ld

DEFINE += -DCPU_MKL28T512VLL7_CORE0

INCLUDE += -I/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include \
			-I/Users/creed/projects/argon-rtos/src/CMSIS/include \
			-I/Users/creed/projects/argon-rtos/src/devices/MKL28T7


all: test.elf

clean:
	rm *.o

test.elf: test.o runtime.o data.o startup_MKL28T7_CORE0.o system_MKL28T7_CORE0.o
	$(GCC) $(TARGET) $(LFLAGS) -Wl,-Map,test.map -o test.elf $^

%.o: %.c
	$(CLANG) $(CFLAGS) -c $(INCLUDE) $(DEFINE) $<

%.o: %.S
	$(GCC) $(TARGET) -std=c11 -O0 -g -nostdlib -ffreestanding -c $(INCLUDE) $(DEFINE) $<



