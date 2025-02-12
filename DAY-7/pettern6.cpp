#include <iostream>
using namespace std;

//        5
//      4 4
//    3 3 3
//  2 2 2 2
//1 1 1 1 1


int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++) {
            cout << (n - i + 1) << " ";
        }
        cout << endl;
    }

    return 0;
}
