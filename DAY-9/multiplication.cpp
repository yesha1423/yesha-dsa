#include <iostream>
using namespace std;

//WAP to print the multiplication table of each array element.

int main() {
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nMultiplication tables:\n";
    for (int i = 0; i < n; i++) {
        cout << "Table of " << arr[i] << ":\n";
        for (int j = 1; j <= 10; j++) {
            cout << arr[i] << " x " << j << " = " << arr[i] * j << endl;
        }
        cout << endl;
    }

    return 0;
}
