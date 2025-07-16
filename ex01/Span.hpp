
#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>

class Span
{
private:
    unsigned int maxSize;
    std::vector<int> nums;
public:

    Span(void);
    Span(long long int n);
    Span(const Span & other);
    Span & operator=(const Span & other);
    ~Span(void);

    void addNumber(int n);
    long long int shortestSpan(void);
    long long int longestSpan(void);

    template <typename Iter>
    void addMulNumbers(Iter  begin, Iter  end);

    unsigned int        getMaxSize(void);
    std::vector<int>  &  getVector(void);
    void                printSpan(void);
};

template <typename Iter>
void Span::addMulNumbers(Iter  begin, Iter  end)
{
//     if (begin == end)
//         throw std::runtime_error("Empty Initializer Countainer");
    for (Iter it = begin; it < end; ++it)
    {
        if (nums.size() >= maxSize)
            throw std::runtime_error("Add NUMBERS: Span Already Full");
        nums.push_back(*it);
    }
}

#endif