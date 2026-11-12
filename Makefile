CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

all: build/final

run:
	./build/final

build/final: build/main.o build/string.o
	$(CC) build/main.o build/string.o -o build/final

build/main.o: src/main.c | build
	$(CC) $(CFLAGS) -c src/main.c -o build/main.o

build/string.o: src/string.c | build
	$(CC) $(CFLAGS) -c src/string.c -o build/string.o



build:
	mkdir -p build
clean:
	rm -rf build