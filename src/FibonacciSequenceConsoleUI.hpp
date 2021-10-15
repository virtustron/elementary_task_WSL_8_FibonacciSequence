#pragma once

#include <iostream>
#include <iterator>
#include "FibonacciSequence.hpp"

class FibonacciSequenceConsoleUI
{
public:
	void MakeDialog(int argc, char* argv[]);
	void ShowInstructions();
    void WriteSequence();

private:
	unsigned int m_upper_bound;
};