#include <iostream>
using namespace std;

//        1
//      0 0
//    1 1 1
//  0 0 0 0
//1 1 1 1 1

int main() {
    int a = 5;

    for (int i = 1; i <= a; i++) {  
        for (int j = 1; j <= a - i; j++) {  
            cout << "  ";  
        }
        for (int k = 1; k <= i; k++) {  
            if (i % 2 != 0) {
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;  
    }
    return 0;
}
