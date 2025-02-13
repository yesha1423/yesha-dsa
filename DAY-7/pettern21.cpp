#include <iostream>
using namespace std;

//1 1 1 1 1
//  0 0 0 0
//    1 1 1
//      0 0
//        1


int main() {
    int a = 5;

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }
        for (int k = 0; k < a - i; k++) {
            if (i % 2 == 0)
                cout << "1 ";
            else
                cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}
