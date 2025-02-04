#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x;
    cout << "Enter two numbers: ";
    cin >> y;

    int minimum = (x < y) ? x : y;  

    cout << "The minimum number is: " << minimum << endl;

    return 0;
}
