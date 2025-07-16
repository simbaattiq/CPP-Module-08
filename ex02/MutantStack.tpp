
#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack & other) : std::stack<T>(other) {};

template <typename T>
MutantStack<T>::~MutantStack(void) {}

template <typename T>
MutantStack<T> & MutantStack<T>::operator=(const MutantStack & other)
{
    if (this != &other)
    {
        std::stack<T>::operator=(other);
    }
    return *this;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() 
{ 
    return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{ 
    return (this->c.end());
}

template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::begin() const 
{
    return this->c.begin();
}
 
template <typename T>
typename MutantStack<T>::const_iterator MutantStack<T>::end() const 
{
    return (this->c.end());
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin() 
{
    return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::reverse_iterator MutantStack<T>::rend() 
{
    return this->c.rend();
}
    
template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const 
{
    return this->c.rbegin();
}

template <typename T>
typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const 
{
    return this->c.rend();
}

template <typename T>
void MutantStack<T>::printStackValue(void )
{
    MutantStack<T>::iterator it = this->c.begin();
    MutantStack<T>::iterator ite = this->c.end();
    if (it == ite){
        std::cout << "Cant Print!! Empty Stack\n"; return;
    }

    std::cout << "**  [Value Printing...]  **\n";
    int i = 0;
    while (it != ite)
    {
        std::cout << "Index: " <<  i++ << ", Value: [" << *it << "] \n";
        ++it;
    }
}

template <typename T>
void MutantStack<T>::printStackStats(void)
{
    std::cout << "**  [Stats Printing...]  **\n";
    std::cout << "Original Stack Size: " << this->c.size() << '\n';
    std::cout << "Original Stack empty? " << std::boolalpha << this->c.empty() << '\n';
}