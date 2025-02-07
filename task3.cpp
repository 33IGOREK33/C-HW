#include <iostream>

int main()
{
    unsigned short yourAge;
    unsigned short *pAge = &yourAge;
    *pAge = 50;
    std::cout<< *pAge;
    return 0;

}