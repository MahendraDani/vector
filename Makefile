CC = g++

all : main

main : src/main.o
	$(CC) -o src/main.o src/main.cpp 

clean:
	rm src/main.o
