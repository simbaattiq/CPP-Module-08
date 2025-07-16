
#include "MutantStack.hpp"
#include <list>

int main(void)
{
    try
    {
        MutantStack<int> mutant;
        mutant.push(10);
        mutant.push(4);
        mutant.push(0);
        mutant.push(12);
        mutant.push(199);

        
        std::cout << "** Original Stack Values **\n";
        mutant.printStackValue();
        mutant.printStackStats();

        std::cout << " ***[ASSIGNEMENT]*** \n" ;
        // MutantStack<int> nStack(mutant);
        MutantStack<int> nStack = mutant;

        std::cout << "==> Poping One Element From the Original Stack Top\n";
        mutant.pop();

        
        std::cout << "** The New Assigned Stack Values **\n";
        nStack.printStackValue();
        nStack.printStackStats();

        std::cout << "** Compared to The Original Stack after Poping **\n";
        mutant.printStackValue();
        mutant.printStackStats();

        /**/
        std::cout << "** [Testing Reverse Iterator] **\n";
        MutantStack<int>::reverse_iterator rb = mutant.rbegin();
        MutantStack<int>::reverse_iterator re = mutant.rend();
        int i = 0;
        while (rb != re){
            
            std::cout << "Index: " << i << ", ";
            std::cout << "Original Stack val: " << *rb << '\n';
            i++;
            ++rb;
        }

        std::cout << "** [Emptying the Original Stack] **\n";
        size_t size = mutant.size();
        while (size-- > 0)
            mutant.pop();
        std::cout << "After pop() Original_Stack Size: " << mutant.size() << '\n';
        std::cout << "After pop() Original_Stack is Empty? " << mutant.empty() << '\n';

    }
    catch(const std::exception& e)
    {
        std::cerr << "Exception Error: " << e.what() << '\n';
    }
}


// int main()
// {
// MutantStack<int> mstack;
// mstack.push(5);
// mstack.push(17);
// std::cout << mstack.top() << std::endl;
// mstack.pop();
// std::cout << mstack.size() << std::endl;
// mstack.push(3);
// mstack.push(5);
// mstack.push(737);
// //[...]
// mstack.push(0);
// MutantStack<int>::iterator it = mstack.begin();
// MutantStack<int>::iterator ite = mstack.end();
// ++it;
// --it;
// while (it != ite)
// {
// std::cout << *it << std::endl;
// ++it;
// }
// std::stack<int> s(mstack);

// std::cout << "** [LIST] ** \n";
// std::list<int> lst;
// lst.push_back(5);
// lst.push_back(17);
// std::cout << lst.back() << std::endl;
// lst.pop_back();
// std::cout << lst.size() << std::endl;
// lst.push_back(3);
// lst.push_back(5);
// lst.push_back(737);
// //[...]
// lst.push_back(0);
// std::list<int>::iterator it1 = lst.begin();
// std::list<int>::iterator ite1 = lst.end();
// ++it1;
// --it1;
// while (it1 != ite1)
// {
// std::cout << *it1 << std::endl;
// ++it1;
// }

// return 0;
// }
