#pragma once

#include <iostream>
#include "FibonacciSequenceIterator.hpp"

using namespace std;

class FibonacciSequenceConsoleUI
{
public:
	void MakeDialog(int argc, char* argv[]);
	void ShowInstructions();
    void WriteSequence();

private:
	unsigned int m_upper_bound;
    FibonacciSequenceIterator m_iterator;


};