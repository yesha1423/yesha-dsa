#include <iostream>
using namespace std;

int main() {
	

//Look at this series: 21, 9, 21, 11, 21, 13, 21, ... What number should come next?
	
    int x = 21;
	int y = 9;

    cout << x << endl;
    cout << y << endl;

    for (int i=0;i<3;i++) {
        x = 21;
        cout << x << endl;
        y += 2;
        cout << y << endl;
    }

    return 0;
}
