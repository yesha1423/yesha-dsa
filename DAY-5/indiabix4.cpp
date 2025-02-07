#include <iostream>
using namespace std;


//Look at this series: 22, 21, 23, 22, 24, 23, ... What number should come next?

int main() {
    int x = 22; 
	int y = 21;

    cout << x << endl;
    cout << y << endl;

    for (int i=0; i<4; i++) {
        x += 2;
        cout<<x<< endl;
        y += 2;
        cout<<y<< endl;
    }

    return 0;
}
