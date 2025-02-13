#include <iostream>
using namespace std;

//        A
//      A B
//    A B C
//  A B C D
//A B C D E

int main() {
    int a = 5;

    for (int i = 1; i <= a; i++) {  
        for (int j = 1; j <= a - i; j++) {  
            cout << "  ";  
        }
        for (char alphabet = 'A'; alphabet < 'A' + i; alphabet++) {  
            cout << alphabet << " ";
        }
        cout << endl;  
    }
    return 0;
}
