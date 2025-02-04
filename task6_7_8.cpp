#include <iostream>

int main()
{


///////////////////////////////
    int counter = 0;
    while (counter < 10)
    {
	    std::cout << "counter: " << counter;
    }
    return 0;
////////////////////////////////


    for (int counter = 0; counter < 10; counter++)
    {
        std::cout << counter << " ";
    }
/////////////////////////////////


int counter = 100;
while (counter > 10)
{
	counter--;
	std::cout << "counter now: " << counter;
	
}


}
