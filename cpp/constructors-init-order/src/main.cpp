
#include <iostream>

class Member
{
public:
    Member()
    {
        std::cout << "Member()\n";
    }
    
    ~Member()
    {
        std::cout << "~Member()\n";
    }
};

class Base0
{
public:
    Base0()
    {
        std::cout << "Base0()\n";
    }
    
    ~Base0()
    {
        std::cout << "~Base0()\n";
    }
};

class Base1
{
public:
    Base1()
    {
        std::cout << "Base1()\n";
    }
    
    ~Base1()
    {
        std::cout << "~Base1()\n";
    }
};

class Derived : public Base0, Base1
{
public:
    Derived()
    // Does it change init order? I suppose some compiler should warn 
    // if order is not the same as in init section.
    //: Base1(), Base0()
    {
        std::cout << "Derived()\n";
    }
    
    ~Derived()
    {
        std::cout << "~Derived()\n";
    }
    
private:
    Member m;
};
 


int main()
{
    std::cout << "Hello\n";
    
    // Base(), Member(), Derived()    
    Derived d;
    
    return 0;
}