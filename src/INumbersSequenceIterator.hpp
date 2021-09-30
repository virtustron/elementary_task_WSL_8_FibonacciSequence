#pragma once

// TODO: STL realization of iterator

class INumbersSequenceIterator
{
public:
    virtual void Next() = 0; 
    virtual bool IsDone() = 0;
    virtual unsigned int Current() = 0;
};