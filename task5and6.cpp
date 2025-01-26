#include <iostream>

using namespace std;

unsigned short  Division(unsigned short x, unsigned short y);

int main()
{
    unsigned short int x , y;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    Division(x,y);
}
unsigned short Division(unsigned short x,unsigned short y)
{
    if (x <= 0 || y <= 0)
    {
        cout << "ERROR";
        return -1;
    }else{
        cout << x / y;
        return 0;
    }
}