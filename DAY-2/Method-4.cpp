#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Before Swap: x = " << x << ", y = " << y << endl;

    swap(x, y);  

    cout << "After Swap: x = " << x << ", y = " << y << endl;
    return 0;
}
