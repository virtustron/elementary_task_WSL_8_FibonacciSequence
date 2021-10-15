#include "FibonacciSequenceConsoleUI.hpp"


void FibonacciSequenceConsoleUI::MakeDialog(int argc, char* argv[])
{
    unsigned int lower_bound;
    unsigned int upper_bound;
    
    if (COMPLETE_FIBONACCI_SEQUENCE_PARAMETERS_COUNT == argc)
	{
        lower_bound = atoi(argv[1]);
	    if (lower_bound == ATOI_NO_CONVERSION_CAN_BE_PERFORMED)
	    {
		    throw std::invalid_argument("Conversion of current upper bound value can't be performed.");
	    }

        upper_bound = atoi(argv[2]);
	    if (upper_bound == ATOI_NO_CONVERSION_CAN_BE_PERFORMED)
	    {
		    throw std::invalid_argument("Conversion of current upper bound value can't be performed.");
	    }
    }
    else
    {
        ShowProgramInstructions();

        std::cout << "Enter lower bound value:\n";
    	std::cin >> lower_bound;
	
	    if (!std::cin)				
	    {
		    std::cin.clear();		
		    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

		    throw std::invalid_argument("Non numerical lower bound value.");
	    }

        std::cout << "Enter upper bound value:\n";
    	std::cin >> upper_bound;
	
	    if (!std::cin)				
	    {
		    std::cin.clear();		
		    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 

		    throw std::invalid_argument("Non numerical upper bound value.");
	    }


    }
    
    WriteSequence(lower_bound, upper_bound);
}


void FibonacciSequenceConsoleUI::ShowInstructions()
{
    // TODO: show program instructions
}

void FibonacciSequenceConsoleUI::WriteSequence(const unsigned int lower_bound, const unsigned int upper_bound)
{
    
    auto fibonacci_sequence = FibonacciSequence(lower_bound, upper_bound);

    for (auto it = fibonacci_sequence.begin(), end = fibonacci_sequence.end(); it < end; ++it)
    {
        const auto i = *it;
        std::cout << i << ' '; 
    }

    std::cout << '\n'; 
}

void FibonacciSequenceConsoleUI::ShowProgramInstructions()
{
	std::cout << "\n";
	std::cout << "=== Fibonacci Sequence Generator console application user manual ===\n";
	std::cout << "Enter two integer numbers one after another - lower bound and upper bound of the sequence.\n";
	std::cout << "\n";
}