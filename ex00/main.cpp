
#include "easyfind.hpp"

int main(void)
{
    try
    {
        int toFind = 4;
        std::vector<int> v;

        v.push_back(-1);
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        v.push_back(4);

        std::vector<int>::iterator res = easyfind(v, toFind);
        int index1 = std::distance(v.begin(), res);
        std::cout << "Vector Element Found, Value: " << *res;
        std::cout << ", Index: " << index1 << '\n';
        
        v.pop_back();
        std::vector<int>::iterator res2 = ::easyfind(v, toFind);
        int index = std::distance(v.begin(), res2);
        std::cout << "Vector Element Found, Value: " << *res2;
        std::cout << ", Index: " << index << '\n';
    }
    catch(const std::exception& e) {
        std::cerr << "Error: Vetor: " << e.what() << '\n';
    }
    try
    {
        std::vector<int> vl;
        int toFind = 42;
        
        std::vector<int>::iterator i = easyfind(vl, toFind);
        int index = std::distance(vl.begin(), i);
        std::cout << "2nd_Vector Element Found, Value: " << *i;
        std::cout << ", Index: " << index << '\n';

    }
    catch(const std::exception& e) {
        std::cerr << "Error: 2nd_Vector: " << e.what() << '\n';
    }   
    try
    {
        int toFind = 0;
        std::deque<int> q;
        q.push_back(1);
        q.push_back(2);
        q.push_back(3);
        q.push_back(4);
        q.push_back(0);

        std::deque<int>::iterator f = easyfind(q, toFind);
        int index = std::distance(q.begin(), f);
        std::cout << "Deque Element Found, Value: " << *f ;
        std::cout << ", Index: " << index << '\n';

    }
    catch(const std::exception& e) {
        std::cerr << "Error: Deque: " << e.what() << '\n';
    }
    try
    {
        int toFind = 1;
        std::list<int> l;
        l.push_back(1);
        l.push_back(2);
        l.push_back(3);
        l.push_back(4);
        l.push_front(0);

        std::list<int>::iterator it = easyfind(l, toFind);
        
        int index = std::distance(l.begin(), it);
        std::cout << "List Element Found: " << *it ;
        std::cout << ", Index: " << index << '\n';
    }
    catch(const std::exception& e) {
        std::cerr << "Error: List: " << e.what() << '\n';
    }
    return 0;
}