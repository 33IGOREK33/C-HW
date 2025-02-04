#include <iostream>

int main()
{
    int x = 100;
    do
    {
        std::cout << x <<"\n";
        x += 2;
    }while (x <= 200);
    return 0;

}