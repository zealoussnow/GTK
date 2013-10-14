CC = gcc
CFLAGS = -Wall -O2 `pkg-config --cflags gtk+-2.0`
LDFLAGS = `pkg-config --libs gtk+-2.0`

TARGETS = demo

all: $(TARGETS)

.PHONY: all clean

clean:
	-rm -rvf $(TARGETS)
