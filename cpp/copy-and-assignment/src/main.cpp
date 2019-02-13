
#include <iostream>

class A
{
public:
    A()
    {
        std::cout << "A()\n";
    }
    
    A(const A& a)
    {
        std::cout << "A(A) - copy constructor\n";
    }
    
    A& operator=(const A& a)
    {
        std::cout << "operator=\n";
        return *this;
    }    
};

int main()
{
    std::cout << "Hello, testing copy constructor and assignement operator\n";
    
    std::cout << "Order should be: A(), A(A), =, A(A)\n";
    
    A a0;
    A a1(a0);
    a0 = a1; 
    A a2 = a0;
    
    return 0;
}