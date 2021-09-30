#include <limits.h>
#include "FibonacciSequenceIterator.hpp"

FibonacciSequenceIterator::FibonacciSequenceIterator()
{
    m_iterator = 1;
    m_last = 1;
    m_before_last = 0;
}

void FibonacciSequenceIterator::Next()
{
    if (m_iterator == 0)
    m_iterator++;
}

bool FibonacciSequenceIterator::IsDone() 
{
    return (m_iterator == UINT_MAX);
}

unsigned int FibonacciSequenceIterator::Current() 
{
    return m_iterator;
}