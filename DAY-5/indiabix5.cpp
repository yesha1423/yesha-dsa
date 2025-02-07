#include <iostream>
using namespace std;

int main() {
	
//Look at this series: 53, 53, 40, 40, 27, 27, ... What number should come next?
	
    int x = 53;
	int y = 53;

    cout << x << endl;
    cout << y << endl;

    for (int i=0; i<3; i++) {
        x -= 13;
        cout<<x<< endl;
        y -= 13;
        cout<<y<< endl;
    }

    return 0;
}
