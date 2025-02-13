#include <iostream>
using namespace std;

//        A
//      B A
//    C B A
//  D C B A
//E D C B A


int main() {
    int a = 5;

    for (int i = 1; i <= a; i++) {  
        for (int j = 1; j <= a - i; j++) {  
            cout << "  "; 
        }
        char alphabet = 'A' + i - 1;
        for (int k = 1; k <= i; k++) {  
            cout << alphabet-- << " ";
        }
        cout << endl;  
    }
    return 0;
}
