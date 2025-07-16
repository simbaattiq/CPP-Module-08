
#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <algorithm>
#include <iterator>

template <typename T>

typename T::iterator easyfind( T& v, int toFind)
{
    if (v.size() < 1)
        throw std::runtime_error("Empty Container");

    typename T::iterator it = std::find(v.begin(), v.end(), toFind);
    if (it == v.end())
        throw std::runtime_error("No Matching Element In The Container");
    
    return it;
}

#endif