#include "Foo/Foo.h"
#include <iostream>

void foo()
{
#ifdef _DEBUG
    std::cout << "IVulkan ver-" << IVULKAN_VERSION_MAJOR << "." << IVULKAN_VERSION_MINOR << std::endl;
#endif 
    std::cout << "Hello world!" << std::endl;
}
