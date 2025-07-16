
#include "Span.hpp"

int main(void)
{
    int max = 10;
    try
    {
        Span s(max);

        for (size_t i = 0; i < s.getMaxSize(); i++)
            s.addNumber(i * 2);
        std::cout << "The Longest Span is: " << s.longestSpan() << '\n';
        std::cout << "The Shortest Span is: " << s.shortestSpan() << '\n';
        s.printSpan();
        // s.addNumber(7);
    }
    catch (const std::exception & e)
    {
        std::cerr << "1st Exception Error: " << e.what() << '\n';
    }
    try
    {
        Span dummy(max);
        std::cout << "Dummy Longest Span is: " << dummy.longestSpan() << '\n'; // throww
        std::cout << "Dummy Shortest Span is: " << dummy.shortestSpan() << '\n';

    }
    catch(const std::exception& e)
    {
        std::cerr << "2nd Exception Error: " << e.what() << '\n';
    }
    try
    {
        /* Testing Adding Multi with iterators*/
        Span emptySpan(max);

        std::vector<int> v(max);
        for (size_t i = 0; i < v.size(); i++)
            v[i] = (i * 2);

        emptySpan.addMulNumbers(v.begin(), v.end());
        std::cout << "The Longest Span is: " << emptySpan.longestSpan() << '\n';
        std::cout << "The Shortest Span is: " << emptySpan.shortestSpan() << '\n';
        emptySpan.printSpan();
    }
    catch(const std::exception& e)
    {
        std::cerr << "3rd Exception Error: " << e.what() << '\n';
    }
    // try
    // {
    //     Span t(-1);
    //     std::cout << "Max Size: " << t.getMaxSize() << "\n";
        
    //     t.addNumber(1);
    //     t.addNumber(2);
    //     t.addNumber(3);

    //     t.printSpan();
    //     std::cout << "longest Span: " << t.longestSpan() << '\n' ;
    //     std::cout << "shortst Span: " << t.shortestSpan() << '\n' ;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << "Error: " << e.what() << '\n';
    // }
    return 0;
}



// int main(void)
// {
//     Span sp = Span(5);
//     sp.addNumber(6);
//     sp.addNumber(3);
//     sp.addNumber(17);
//     sp.addNumber(9);
//     sp.addNumber(11);
//     std::cout << sp.shortestSpan() << std::endl;
//     std::cout << sp.longestSpan() << std::endl;
//     return 0;
// }


// int main(void)
// {
//     try
//     {
//         // Span s(10);

//         Span s(1000000);
//         // for (size_t i = 0; i < s.getMaxSize(); i++)
//         //     s.addNumber(i * 2);

//         /*7*/
//         s.addNumber(10);
//         s.addNumber(3);

//         /*1 3*/
//         s.addNumber(1);
//         s.addNumber(2);
//         s.addNumber(3);
//         s.addNumber(4);

//         /*10 5*/
//         s.addNumber(-5);
//         s.addNumber(5);
//         s.addNumber(0);

//         /*0 6*/
//         s.addNumber(2);
//         s.addNumber(2);
//         s.addNumber(5);
//         s.addNumber(5);
//         s.addNumber(8);

//         s.addNumber(9);

//         /*4294967295*/
//         s.addNumber(-2147483648);
//         s.addNumber(2147483647);

//         /*999*/
//         s.addNumber(1000);
//         s.addNumber(1);

//         /*9 0*/
//         s.addNumber(1);
//         s.addNumber(1);
//         s.addNumber(4);
//         s.addNumber(4);
//         s.addNumber(7);
//         s.addNumber(10);

//         /*0 4*/
//         s.addNumber(-1);
//         s.addNumber(0);
//         s.addNumber(0);
//         s.addNumber(3);

//         /*3 9*/
//         s.addNumber(-4);
//         s.addNumber(-1);
//         s.addNumber(-7);
//         s.addNumber(-10);

//         /*0*/
//         s.addNumber(7);
//         s.addNumber(7);
//         s.addNumber(7);
//         s.addNumber(7);

//         s.printSpan();


//         std::cout << "longest Span: " << s.longestSpan() << '\n' ;
//         std::cout << "shortst Span: " << s.shortestSpan() << '\n' ;

//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     return 0;
// }