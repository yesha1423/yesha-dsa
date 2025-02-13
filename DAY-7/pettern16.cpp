#include <iostream>
using namespace std;

//A B C D E
//  B C D E
//    C D E
//      D E
//        E


int main() {
    int a = 5;

    for (int i = 0; i < a; i++) {
        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }
        for (char k = 'A' + i; k <= 'E'; k++) {
            cout << k << " ";
        }
        cout << endl;
    }

    return 0;
}
