#include <iostream>
using namespace std;
int main()
{
    int a , b , c = 0;
    cout << "Введите первое число: ";
    cin >> a ;
    cout << endl << "Введите второе число: ";
    cin >> b;

    if (a > b)
    {
        c = b;
        b = a;
        a = c;
        cout << endl << "Первое число: " << a << endl << "Второе число: " << b << endl;
    }else{
        c = a;
        a = b;
        b = c;
        cout << endl << "Первое число: " << a << endl << "Второе число: " << b << endl;
    }
    return 0;
}