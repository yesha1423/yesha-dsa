#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Before Swap: x = " << x << ", y = " << y << endl;

    if (x != 0 && y != 0) {
        x = x * y;
        y = x / y;
        x = x / y;
    } else {
        cout << "ans is 0." << endl;
        return 0;
    }

    cout << "After Swap: x = " << x << ", y = " << y << endl;
    return 0;
}
