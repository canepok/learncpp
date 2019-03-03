

#include <iostream>
#include <vector>
#include <sstream>

class NoConstructor
{
public:  
    NoConstructor() = delete;
};

void TEST_DEFINE_LAMBDA()
{
    std::cout << "\nTEST_DEFINE_LAMBDA\n";
}


int main()
{
    std::cout<<"Hello!\n";
    
    // Unable to 
    //NoConstructor s;
    
    TEST_DEFINE_LAMBDA();
    
    // Sorting
    
    
    return 0;
}