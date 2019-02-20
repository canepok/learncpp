
#include <iostream>
#include <vector>
#include <sstream>

class A
{
public:
	A(std::initializer_list<int> l) : m_v{l} {}
	
	auto begin() { return m_v.begin(); }
	auto end() { return m_v.end(); }
	
private:
	std::vector<int> m_v;
};

void TEST_DEFINE_CUSTOM_CLASS()
{
	std::cout << "\nTEST_DEFINE_CUSTOM_CLASS\n";
	
    A a = {1, 2, 3, 4, 5};
    
	std::cout << "Print original vector\n";
    for (auto x : a)
		std::cout << x;
}

int main()
{
    std::cout<<"Hello!\n";
    
	TEST_DEFINE_CUSTOM_CLASS();
    
    return 0;
}