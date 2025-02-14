#include <iostream>

int main() {
    
    int varOne = 6;
    int* const pNumber = &varOne;  
    std::cout << "varOne before: " << varOne << std::endl;
    *pNumber = 8;

    std::cout << "varOne after: " << varOne << std::endl;

    int varTwo = 10;

    pNumber = &varTwo;

    std::cout << "varTwo: " << *pNumber << std::endl;

    return 0;
}

