VERSION = 0
PATCHLEVEL = 1
SUBLEVEL = 0
EXTRAVERSION =
NAME = Learning C

PHONY := all
all: ex1 ex3

CFLAGS=-Wall -g
clean:
	rm -f ex1 ex3
