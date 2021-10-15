#include <limits.h>
#include "FibonacciSequenceIterator.hpp"

FibonacciSequenceIterator& FibonacciSequenceIterator::operator++() 
{
    // 0 1 1 2 3 5 8 13 21 34
    switch (m_num)
    {
    case 0:
        ++m_num;
        break;

    case 1:
        if (m_last == 0)
        {
            m_last = 1;
        }
        else
        {
            // m_last == 1
            m_num = m_last + m_before_last;

            m_before_last = m_last;
            m_last = m_num;
        }
        
        break;
    
    default:
        m_num = m_last + m_before_last;
        m_before_last = m_last;
        m_last = m_num;
        
        break;
    }

    return *this;
}

FibonacciSequenceIterator FibonacciSequenceIterator::operator++(int) 
{
    FibonacciSequenceIterator retval = *this; 
    ++(*this); 
    
    return retval;
}

bool FibonacciSequenceIterator::operator==(const FibonacciSequenceIterator& other) const 
{
    return m_num == other.m_num;
}

bool FibonacciSequenceIterator::operator!=(const FibonacciSequenceIterator& other) const 
{
    return !(*this == other);
}

FibonacciSequenceIterator::reference FibonacciSequenceIterator::operator*() const 
{
    return m_num;
}