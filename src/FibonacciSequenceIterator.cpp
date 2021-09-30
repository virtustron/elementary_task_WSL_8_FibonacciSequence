#include <limits.h>
#include "FibonacciSequenceIterator.hpp"

FibonacciSequenceIterator::FibonacciSequenceIterator()
{
    // init list - use ":"
    m_iterator = 0;
    m_last = 0;
    m_before_last = 0;
}

void FibonacciSequenceIterator::Next()
{
    // 0 1 1 2 3 5 8 13 21 34
    

    //TODO: switch

    if (0 == m_iterator)
    {   
        ++m_iterator;
    } 

    if ((m_iterator == 1) && (m_last == 0))
    {   
        m_last = 1;
    }  

    if ((m_iterator == 1) && (m_last == 1))
    {   
        m_iterator = m_last + m_before_last;

        m_before_last = 1;
        m_last = m_iterator;

    } 

    if (m_iterator > 1)
    {   
        m_iterator += m_last + m_before_last;

        m_before_last = m_last;
        m_last = m_iterator;
    }

}

bool FibonacciSequenceIterator::IsDone() 
{
    return (m_iterator == UINT_MAX);
}

unsigned int FibonacciSequenceIterator::Current() 
{
    return m_iterator;
}