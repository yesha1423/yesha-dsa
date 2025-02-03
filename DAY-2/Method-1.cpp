#include <iostream>
using namespace std;

int main() {
    int x, y;
    
    cout << "Enter value: ";
    cin >> x;
    cout << "Enter value: ";
    cin >> y;
    
    x = x + y;
    y = x - y;
    x = x - y;

    cout << "After Swap: x = " << x << ", y = " << y << endl;
    return 0;
}
