#include <iostream>

using namespace std;

int main()
{
	int *pInt = new int;
	*pInt = 9;
	cout << " The value at pInt: "<< *pInt;
    
	return 0;
}

