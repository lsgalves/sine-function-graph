all: build

build: main.c
	gcc main.c -o graph -lm

clean:
	rm -rf *.o *~ graph

.DEFAULT: all

.PHONY: all build clean
