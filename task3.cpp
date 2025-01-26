#include <iostream>
using namespace std;

unsigned short myFunc(unsigned short x);
int main()
{
    unsigned short int x, y;
    y = myFunc(x);
    cout << "x: " << x << "\ty: " << y << "\n";
}
unsigned short myFunc(unsigned short x)
{
    return 4 * x;
}
