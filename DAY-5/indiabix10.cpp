#include <iostream>
using namespace std;

//Look at this series: 31, 29, 24, 22, 17, ... What number should come next?

int main() 
{
    int x = 31;

    for (int i=0;i<5;i++) 
	{
        cout << x << endl;
        if (i % 2 == 0)
            {
            	x-=2;
			}
        else
            {
            	x-=5;
			}
    }

    cout << x << endl;

    return 0;
}
