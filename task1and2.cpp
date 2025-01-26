#include <iostream>

using namespace std;

unsigned long  Perimeter(unsigned short  width, unsigned short lenght );

int main()
{
    unsigned short length, width;
    unsigned long area;

    cout << "Enter the width of the triangle: ";
    cin >> width;
    cout << "\nEnter the ength of the triangle: ";
    cin >> length;
    area = Perimeter(width, length);
    cout << "\n\n Area of the triangle is: " << area << endl;

    return 0;

}

unsigned long Perimeter( unsigned short width, unsigned short length)
{
    unsigned long int area;
    area = (static_cast<unsigned long int>( width) * 2) + (static_cast<unsigned long int>(length) * 2);
    return area ;
}
