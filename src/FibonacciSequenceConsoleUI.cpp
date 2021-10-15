#include "FibonacciSequenceConsoleUI.hpp"


void FibonacciSequenceConsoleUI::MakeDialog(int argc, char* argv[])
{
    // TODO: request data from user
    // ...
    // for example Upper Bound is 50
    m_upper_bound = 100;


    // TODO: validate "m_upper_bound" 
    // temporary validation:
    if (m_upper_bound > 0 || m_upper_bound < 1000)
    {
        WriteSequence();
    }
}


void FibonacciSequenceConsoleUI::ShowInstructions()
{
    // TODO: show program instructions
}

void FibonacciSequenceConsoleUI::WriteSequence()
{
    
    auto fibonacci_sequence = FibonacciSequence(10, 100);

    for (auto it = fibonacci_sequence.begin(), end = fibonacci_sequence.end(); it < end; ++it)
    {
        const auto i = *it;
        std::cout << i << ' '; 
    }

    std::cout << '\n'; 
}
