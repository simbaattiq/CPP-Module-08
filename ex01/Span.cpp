
#include "Span.hpp"

Span::Span(void) : maxSize(0) {}

Span::Span(long long int n)
{
    if (n < 0)
        throw std::runtime_error("Initial Max Size Must be Positive");
    maxSize = static_cast<unsigned int>(n);
}

Span::Span(const Span & other) : maxSize(other.maxSize), nums(other.nums) {}

Span & Span::operator=(const Span & other)
{
    if (this != &other)
    {
        maxSize = other.maxSize;
        nums = other.nums;
    }
    return *this;
}

Span::~Span(void) {}

void Span::addNumber(int n)
{
    if (nums.size() >= maxSize)
        throw std::runtime_error("The Span is Full, we can't add more numbers");
    nums.push_back(n);
}

long long int Span::shortestSpan(void)
{
    if (nums.empty())
        throw std::runtime_error("No Shortest Span: Empty Container");
    if (nums.size() < 2)
        throw std::runtime_error("No Shortest Span: Size too Small");
    
    std::vector<int> sorted = nums;
    long long int result = LONG_LONG_MAX;
    size_t i = 0;
    long long int shortestSpan = 0;

    std::sort(sorted.begin(), sorted.end());
    
    while ((i + 1) < sorted.size())
    {
        shortestSpan = static_cast<long long int>(sorted.at(i + 1)) - static_cast<long long int>(sorted.at(i));
        if (shortestSpan < result)
            result = shortestSpan;
        i++;
    }
    return (result);
}

long long int Span::longestSpan(void)
{

    if (nums.empty())
        throw std::runtime_error("No Longest Span: Empty Container");
    if (nums.size() < 2)
        throw std::runtime_error("No Longest Span: Size too Small");
    
    long long int max = *std::max_element(nums.begin(), nums.end());
    long long int min = *std::min_element(nums.begin(), nums.end());

    long long int res = static_cast<long long int>(max)  - static_cast<long long int>(min);

    if (res < 0)
        throw std::runtime_error("Negative Result in Longest Span");
    return (res);
}

unsigned int Span::getMaxSize(void)
{
    return (this->maxSize);
}

std::vector<int>  &  Span::getVector(void)
{
    return this->nums;
}

void Span::printSpan(void)
{
    std::vector<int>::iterator begin = (this->getVector()).begin();
    std::vector<int>::iterator end = (this->getVector()).end();
    if (begin == end)
        std::cout << "Span is Empty: no members to print" ;
    size_t i = 0;
    std::cout << "Vector Max Size: " << this->getMaxSize() << '\n';
    for (; begin != end; ++begin)
    {
        std::cout << "Index: " << i << ", Value [" << *begin << "]\n";
        i++;
    }
}