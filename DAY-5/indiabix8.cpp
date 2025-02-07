#include <iostream>
using namespace std;

//Look at this series: 3, 4, 7, 8, 11, 12, ... What number should come next?

int main() 
{
    int x = 3;
	int y = 4;

    for (int i=0;i<3;i++) 
	{
        cout << x << endl;
        cout << y << endl;
        x += 4;
        y += 4;
    }

    cout << x << endl;

    return 0;
}
