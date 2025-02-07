#include <iostream>
using namespace std;

//Look at this series: 2, 1, (1/2), (1/4), ... What number should come next?

int main() {
	
    int denominator = 2;
    cout << "2, 1, (1/2), (1/4)";

    int count = 0;
    while (count <= 5) {
        cout << "1/" << denominator;
        if (count < 5) {
            cout << endl;
        }
        denominator*=2;
        count++;
    }

    return 0;
}
