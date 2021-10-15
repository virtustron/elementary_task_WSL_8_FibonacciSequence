#pragma once

#include <iterator> // For std::input_iterator_tag
#include <limits.h>

class FibonacciSequenceIterator: public std::iterator<
                        std::input_iterator_tag,           // iterator_category
                        unsigned int,                      // value_type
                        unsigned int,                      // difference_type
                        const unsigned int*,               // pointer
                        unsigned int                       // reference
                        >
{
       
public:
        explicit FibonacciSequenceIterator(unsigned int num = 0) : m_num(num) {}
        
        FibonacciSequenceIterator& operator++();
        FibonacciSequenceIterator operator++(int);

        bool operator==(const FibonacciSequenceIterator& other) const;
        bool operator!=(const FibonacciSequenceIterator& other) const;

        bool operator>(const FibonacciSequenceIterator& other) const;
        bool operator<(const FibonacciSequenceIterator& other) const;
        
        reference operator*() const;

private:
        unsigned int m_num = 0;
        unsigned int m_last = 0;
        unsigned int m_before_last = 0;
};