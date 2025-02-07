#include <iostream>
using namespace std;

//Look at this series: 58, 52, 46, 40, 34, ... What number should come next?

int main() {
    int x = 58;
	int y = 6;

    for (int i=0;i<5; i++) 
	{
        cout << x << endl;
        x -= y;
    }

    cout << x << endl;

    return 0;
}
