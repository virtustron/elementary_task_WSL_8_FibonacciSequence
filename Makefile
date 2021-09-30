src = ./src/
bin = ./bin/

all: main
		
main: build_all
	g++ -o $(bin)main $(bin)main.o $(bin)FibonacciSequenceConsoleUI.o $(bin)FibonacciSequenceIterator.o 

build_all:
	g++ -o $(bin)FibonacciSequenceIterator.o -c $(src)FibonacciSequenceIterator.cpp
	g++ -o $(bin)FibonacciSequenceConsoleUI.o -c $(src)FibonacciSequenceConsoleUI.cpp
	g++ -o $(bin)main.o -c $(src)main.cpp












