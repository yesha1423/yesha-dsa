#include <iostream>
using namespace std;

//        |   
//      | - 
//    | - | 
//  | - | - 
//| - | - |


int main() {
    int a = 5;

    for (int i = 1; i <= a; i++) {  
        for (int j = 1; j <= a - i; j++) {  
            cout << "  ";  
        }
        for (int k = 1; k <= i; k++) {  
            if (k % 2 != 0) {
                cout << "| ";
            } else {
                cout << "- ";
            }
        }
        cout << endl;  
    }
    return 0;
}
