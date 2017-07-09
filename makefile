COMPILE_OPTION=-Wall -g -O3 -std=c++14
CC=g++ $(COMPILE_OPTION)

all: initializer arrays enum

initializer: initializer.o
	$(CC) initializer.o -o initializer

enum: enum.o
	$(CC) enum.o -o enum

arrays: arrays.o
	$(CC) arrays.o -o arrays

%.o: %.cpp
	@echo "--------------- Compiling $@ ---------------"
	$(CC) -c $< -o $@ $(CPPFLAGS)

clean:
	rm -rf *.o
	rm -rf *test
