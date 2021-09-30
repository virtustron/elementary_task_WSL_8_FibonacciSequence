src = src/
bin = bin/

all: main


# “-g ”: Generates debugging information

main: build_all
	g++ -g -o $(bin)main $(bin)main.o $(bin)FibonacciSequenceConsoleUI.o $(bin)FibonacciSequenceIterator.o 

build_all:
	g++ -g -o $(bin)FibonacciSequenceIterator.o -c $(src)FibonacciSequenceIterator.cpp
	g++ -g -o $(bin)FibonacciSequenceConsoleUI.o -c $(src)FibonacciSequenceConsoleUI.cpp
	g++ -g -o $(bin)main.o -c $(src)main.cpp












