#include <iostream>
using namespace std;

//5 4 3 2 1
//  4 3 2 1
//    3 2 1
//      2 1
//        1


int main() {
    int a = 5;

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }
        for (int k = a - i; k >= 1; k--) {
            cout << k << " ";
        }
        cout << endl;
    }

    return 0;
}
