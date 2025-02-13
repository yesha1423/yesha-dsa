#include <iostream>
using namespace std;

//5 4 3 2 1
//  5 4 3 2
//    5 4 3
//      5 4
//        5


int main() {
    int a = 5;

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < i; j++) {
            cout << "  ";
        }
        for (int k = 5; k >= i + 1; k--) {
            cout << k << " ";
        }
        cout << endl;
    }

    return 0;
}
