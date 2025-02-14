#include <iostream>

int main() 
{
    int someInt;
    int &rSomeInt = someInt;
    int *pSomeInt = &someInt;

    someInt = 5;
    std::cout << "someInt: " << someInt << std::endl;
    std::cout << "pSomeInt: " << *pSomeInt << std::endl;
    std::cout << "rSomeInt: " << rSomeInt << std::endl;

    rSomeInt = 10;
    std::cout << "someInt: " << someInt << std::endl;
    std::cout << "pSomeInt: " << *pSomeInt << std::endl;
    std::cout << "rSomeInt: " << rSomeInt << std::endl;

    *pSomeInt = 20;
    std::cout << "someInt: " << someInt << std::endl;
    std::cout << "pSomeInt: " << *pSomeInt << std::endl;
    std::cout << "rSomeInt: " << rSomeInt << std::endl;
    return 0;
}

