#include <iostream>
using namespace std;

//1 2 3 4 5
//  1 2 3 4
//    1 2 3
//      1 2
//        1


int main() {
    int rows = 5;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 2 * i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= rows - i; k++) {
            cout << k << " ";
        }
        cout << endl;
    }
    
    return 0;
}
