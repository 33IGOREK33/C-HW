#include <iostream>

int main()
{
    int *pInt = new int;
    *pInt = 5;
    std::cout << "pInt: " << *pInt << std::endl;
    delete pInt;

    long *pLong = new long;
    *pLong = 10;
    std::cout << "pLong: " << *pLong << std::endl;

    *pInt = 15;

    std::cout << "pInt: " << *pInt << std::endl;
    std::cout << "pLong: " << *pLong << std::endl;
    delete pLong;


}