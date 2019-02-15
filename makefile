P=list
CFLAGS=-Wall -Wextra -DDEBUG -g -std=c++14

all: List.cpp List.h
	g++ $(CFLAGS) -c List.cpp

run: all
	valgrind ./$(P)

clean:
	rm -f $(P) List.o
