#include "FibonacciSequence.hpp"

FibonacciSequence::FibonacciSequence(const unsigned int lower_bound, const unsigned int upper_bound)
{
    // TODO add validation
    m_lower_bound = lower_bound;
    m_upper_bound = upper_bound;
}


FibonacciSequenceIterator FibonacciSequence::begin() 
{
    return FibonacciSequenceIterator(m_lower_bound);
}

FibonacciSequenceIterator FibonacciSequence::end() 
{
    return FibonacciSequenceIterator(m_upper_bound);
}

