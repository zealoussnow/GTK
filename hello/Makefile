CC = gcc

CFLAGS = $(shell pkg-config --cflags gtk+-2.0)
LDFLAGS = `pkg-config --libs gtk+-2.0`

TARGET = demo hello
# Add more source
#demo: main.c

all: $(TARGET)

.PHONY: all clean

clean:
	-rm -rfv $(TARGET)
