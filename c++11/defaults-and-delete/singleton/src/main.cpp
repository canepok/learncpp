

#include <iostream>
#include <vector>
#include <sstream>

#include "Singleton.h"


int main()
{
    std::cout<<"Hello!\n";
    
    Singleton& s = Singleton::instance();
    
    
    return 0;
}