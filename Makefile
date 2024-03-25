# Makefile for "reverse"

all: reverse

run: all
	./reverse

test: test-revlib
	./test-revlib

clean:
	rm -f *.o test-revlib reverse

test-revlib: test-revlib.c revlib.o

reverse: reverse.c revlib.o
