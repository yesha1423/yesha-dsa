#include <iostream>
using namespace std;


//Look at this series: 36, 34, 30, 28, 24, ... What number should come next?

int main() {
	
    int n = 36;
    int diff[] = {2, 4};
    int i = 0;

    for (int j = 0; j < 5; j++) 
	{
        cout << n << endl;
        n -= diff[i];
        i = 1 - i;
    }

    cout << n << endl;

    return 0;
}
