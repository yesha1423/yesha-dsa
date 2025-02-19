#include <iostream>
using namespace std;

// WAP to find the average of the 1D array.

int main() {
    int n, sum = 0;
    
    cout << "Enter the numbers: ";
    cin >> n;
    
    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << "Average = " << sum / n;
    
    return 0;
}
