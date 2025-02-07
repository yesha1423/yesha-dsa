#include <iostream>
using namespace std;

int main() {
    int denominator = 2;
    cout << "2, 1, ";

    int count = 0;
    while (count <= 5) {
        cout << "1/" << denominator;
        if (count < 10) {
            cout << endl;
        }
        denominator*=2;
        count++;
    }

    return 0;
}
