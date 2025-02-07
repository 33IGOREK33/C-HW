#include <iostream>

int main()
{
    int mySalary;
    int * pSalary = &mySalary;
    *pSalary = 2800;
    std::cout << "My payroll deposit is: " << *pSalary << "$";
    return 0;
}