#include <iostream>
using namespace std;

//A B C D E
//  A B C D
//    A B C
//      A B
//        A


int main() {
    int a = 5;

    for (int i = 1; i <= a; i++) {  
        for (int j = 1; j < i; j++) {  
            cout << "  "; 
        }
        for (char alphabet = 'A'; alphabet <= 'A' + (a - i); alphabet++) {  
            cout << alphabet << " ";
        }
        cout << endl;  
    }
    return 0;
}
