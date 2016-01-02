
ROOT := ..

CLANG ?= /Users/creed/projects/_third_party/llvm/build/bin/clang
GCC ?= /opt/gcc-arm-none-eabi-4_9-2015q3/bin/arm-none-eabi-gcc

TARGET = -mcpu=cortex-m0plus -mthumb
CFLAGS += -target arm-none-eabi $(TARGET) -O0 -g -std=c11 -nostdlib -ffreestanding -fblocks \
			-fshort-enums -ffunction-sections -fdata-sections

LSCRIPT = $(ROOT)/devices/MKL28T7/gcc/MKL28T512xxx7_CORE0_flash.ld
LFLAGS += --specs=rdimon.specs -Wl,-T,$(LSCRIPT)

DEFINE += -DCPU_MKL28T512VLL7_CORE0

INCLUDE += -I/opt/gcc-arm-none-eabi-4_9-2015q3/arm-none-eabi/include \
			-I$(ROOT)/CMSIS/include \
			-I$(ROOT)/devices/MKL28T7 \
			-I$(ROOT)/blocksruntime

SOURCES = test.c \
			$(ROOT)/blocksruntime/runtime.c \
			$(ROOT)/blocksruntime/data.c \
			$(ROOT)/devices/MKL28T7/gcc/startup_MKL28T7_CORE0.S \
			$(ROOT)/devices/MKL28T7/system_MKL28T7_CORE0.c

CSOURCES = $(filter %.c,$(SOURCES))
SSOURCES = $(filter %.S,$(SOURCES))

COBJECTS = $(CSOURCES:.c=.o)
SOBJECTS = $(SSOURCES:.S=.o)
OBJECTS = $(COBJECTS) $(SOBJECTS)

.PHONY: all
all: test.elf

.PHONY: clean
clean:
# 	echo $(OBJECTS)
	rm -f $(OBJECTS)

test.elf: $(OBJECTS)
	$(GCC) $(TARGET) $(LFLAGS) -Wl,-Map,test.map -o test.elf $^

%.o: %.c
	$(CLANG) $(CFLAGS) -c $(INCLUDE) $(DEFINE) -o $@ $<

%.o: %.S
	$(GCC) $(TARGET) -std=c11 -O0 -g -nostdlib -ffreestanding -c $(INCLUDE) $(DEFINE) -o $@ $<



