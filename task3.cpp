#include <iostream>

int main() {
    
    int varOne = 6;
    int* const pNumber1 = &varOne;  
    std::cout << "varOne before: " << varOne << std::endl;
    varOne = 8;

    std::cout << "varOne after: " << varOne << std::endl;

    int varTwo = 10;

    int *const pNumber2 = &varTwo;

    std::cout << "varTwo: " << *pNumber2 << std::endl;

    return 0;
}

