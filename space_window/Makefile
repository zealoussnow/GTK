CC = gcc
CFLAGS = `pkg-config --cflags gtk+-2.0`
LDFLAGS = `pkg-config --libs gtk+-2.0`

TARGETS = main

all : $(TARGETS)

.PHONY : all clean

clean : 
	-rm -rvf $(TARGETS)
