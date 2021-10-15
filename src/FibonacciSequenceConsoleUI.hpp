#pragma once

#include <iostream>
#include <iterator>
#include <stdexcept>
#include <limits>
#include "FibonacciSequence.hpp"

const int COMPLETE_FIBONACCI_SEQUENCE_PARAMETERS_COUNT = 3;   // 3 =  1 program name + 1 lower bound + 1 upper bound
const double ATOI_NO_CONVERSION_CAN_BE_PERFORMED = 0;

class FibonacciSequenceConsoleUI
{
public:
	void MakeDialog(int argc, char* argv[]);
	void ShowInstructions();
    void WriteSequence(const unsigned int lower_bound, const unsigned int upper_bound);

private:
	unsigned int m_upper_bound;

	void ShowProgramInstructions();
};