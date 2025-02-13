#include <iostream>
using namespace std;

//1 2 3 4 5
//  2 3 4 5
//    3 4 5
//      4 5
//        5


int main() {
    int a = 5;

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }
        for (int k = i + 1; k <= a; k++) {
            cout << k << " ";
        }
        cout << endl;
    }

    return 0;
}
