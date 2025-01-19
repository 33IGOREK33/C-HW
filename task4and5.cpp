#include <iostream>

using namespace std;
int main()
{

	int a = 1, b = 1, c;

    //В данном случае вызов оператора if абсолютно бесполезен,так как в примере нету альтернативных действий то есть мы просто присваиваем переменной c, выражение a-b

    /*
    if (c = (a - b))
    {
        cout << "The value of c is: " << c;
    }
    */
   c = a - b;
   cout << "The value of c is: " << c;
	

	return 0;

}
