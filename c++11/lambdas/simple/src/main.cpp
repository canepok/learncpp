

#include <iostream>
#include <vector>
#include <sstream>

std::stringstream toString(const std::vector<int>& a)
{
    std::stringstream output;
    output << "[";
    for (auto e : a)
        output << e << " ";
    output << "]";
    
    return output;
}

void TEST_DEFINE_LAMBDA()
{
    std::cout << "\nTEST_DEFINE_LAMBDA\n";
    std::vector<int> v = {1, 2, 3, 4, 5};
    
    auto sum = [](auto array) {
        auto sum = 0;
        for (auto x : array)
            sum += x;
        
        return sum;
    };    
    std::cout << "sum of " << toString(v).str() << " is " << sum(v) << std::endl;
}


int main()
{
    std::cout<<"Hello!\n";
    
    TEST_DEFINE_LAMBDA();
    
    // Sorting
    
    
    return 0;
}