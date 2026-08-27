CC ?= gcc
CFLAGS ?= -std=c17 -Wall -Wextra -pedantic -O2
TARGET := build/main
SOURCE := main.c

.PHONY: all build run clean

all: build

build: $(TARGET)

$(TARGET): $(SOURCE)
	@mkdir -p build
	$(CC) $(CFLAGS) $(SOURCE) -o $(TARGET)

run: build
	./$(TARGET)

clean:
	rm -rf build