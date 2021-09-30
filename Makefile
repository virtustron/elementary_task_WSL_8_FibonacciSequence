src = ./src/
bin = ./bin/

all: main
		
main: build_all
	g++ -o $(bin)main $(bin)main.o $(bin)NaturalSequenceConsoleUI.o $(bin)NaturalSequenceIterator.o 

build_all:
	g++ -o $(bin)NaturalSequenceIterator.o -c $(src)NaturalSequenceIterator.cpp
	g++ -o $(bin)NaturalSequenceConsoleUI.o -c $(src)NaturalSequenceConsoleUI.cpp
	g++ -o $(bin)main.o -c $(src)main.cpp

ui:
	g++ -o $(bin)NaturalSequenceConsoleUI.o -c $(src)NaturalSequenceConsoleUI.cpp










