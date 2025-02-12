#include <iostream>
using namespace std;

//    1
//   12
//  123
// 1234
//12345

int main() {
    int n = 5;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << k;
        }
        cout << endl;
    }

    return 0;
}
