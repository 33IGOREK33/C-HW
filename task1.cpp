#include <iostream> 
using namespace std;

int Power(int,int);

int main()
{
    
    int number, power;
    cout << "Wright number: ";
    cin >> number;
    cout << "\nWright power: ";
    cin >> power;
    
    int resualt = Power(number, power);
    cout << resualt;
    return 0;
}
int Power(int number, int power)
{
    if (power > 1 )
    {
        return number * Power(number, power -1) ;
    }
    else if (power == 1)
    {
        return number;
    }
    else if (power == 0)
    {
        return 1;
    }else{
        return -1;
    }

    
}