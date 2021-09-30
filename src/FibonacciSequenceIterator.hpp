#pragma once

#include "INumbersSequenceIterator.hpp"

class FibonacciSequenceIterator : public INumbersSequenceIterator
{
public:
    FibonacciSequenceIterator() ;
    void Next() override; 
    bool IsDone() override;
    unsigned int Current() override;
private:
    unsigned int m_iterator = 0;
    unsigned int m_last = 0;
    unsigned int m_before_last = 0;

};