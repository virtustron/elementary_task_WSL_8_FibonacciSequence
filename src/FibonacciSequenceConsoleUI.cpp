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
    for (unsigned int i : FibonacciSequence()) 
    {
        std::cout << i << ' '; 

        if (i >= m_upper_bound)
        {
            break;
        }
    }

    std::cout << '\n'; 
}
