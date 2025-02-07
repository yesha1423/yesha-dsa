#include <iostream>
using namespace std;


//Look at this series: 8, 22, 8, 28, 8, ... What number should come next?

int main() 
{
    int x = 8;
	int y = 22;

    for (int i=0;i<3;i++) 
	{
        cout << x << endl;
        cout << y << endl;
        y += 6;
    }

    cout << x << endl;
    cout << y << endl;

    return 0;
}
