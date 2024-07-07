CC = g++

all : main

main : src/main.o
	$(CC) -o src/main.o src/main.cpp src/lib/point.cpp

clean:
	rm src/main.o
