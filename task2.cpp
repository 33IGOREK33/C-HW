#include <iostream>

using namespace std;

int main ()
{
    int age ;
    float square, precipitationLevel;
    long long int stars_In_The_Galaxy ;
    cout << "введіть свій вік: ";
    cin >> age ;
    cout <<  "введіть площа заднього двору: ";
    cin >> square;
    cout << " введіть кiлькiсть зірок у галактиці: " ;
    cin >> stars_In_The_Galaxy;
    cout << "введіть cередньомісячний рівень опадів: ";
    cin >> precipitationLevel;
    cout << endl << "ваш вiк: \t\t\t\t" << age << endl;
    cout << "площа заднього двору:\t\t\t" << square << endl;
    cout << "кiлькiсть зірок у галактиці: \t\t" << stars_In_The_Galaxy << endl;
    cout << "cередньомісячний рівень опадів: \t" << precipitationLevel << endl;

    return 0;
}