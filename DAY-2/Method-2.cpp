#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter number: ";
    cin >> x;
    cout << "Enter number: ";
    cin >> y;


    if (x != 0 && y != 0) {  
        x = x * y;  
        y = x / y;  
        x = x / y;  
    } else {
        cout << "ans is 0." << endl;
        return 0;
    }

    cout << " x = " << x << ", y = " << y << endl;
    return 0;
}
