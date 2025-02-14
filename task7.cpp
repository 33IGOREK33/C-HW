#include <iostream>

int main() {
    int* pInt = new int(10);  

    std::cout << "Value: " << *pInt << std::endl;
    delete pInt;

    return 0;
}
