#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the numbers: ";
    cin >> size;

    int arr[size];

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Even numbers in the array: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
    return 0;
}
