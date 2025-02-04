#include <iostream>

int main()
{
    int rows, columns;
    rows = 10;
    columns = 10;
    char zeroChar = '0';

    for (int x = 0;  x < rows; x++)
    {
        for (int y = 0; y < columns; y++)
        {
            std::cout << zeroChar;
        }
        std::cout << std::endl;
    }
    return 0;
}