
#include <iostream>
#include <vector>
#include <sstream>

void TEST_SIMPLE_FOR_RANGE()
{
    std::cout << "\nTEST_SIMPLE_FOR_RANGE\n";
    std::vector<int> v = {1, 2, 3, 4, 5};
    
	std::cout << "Print original vector\n";
    for (auto x : v)
		std::cout << x;
	
	std::cout << "\n\nPrint increased by 1 vector\n";
	for (auto &x : v)
		std::cout << ++x;
	
	std::cout << std::endl;
}

int main()
{
    std::cout<<"Hello!\n";
    
    TEST_SIMPLE_FOR_RANGE();
    
    return 0;
}