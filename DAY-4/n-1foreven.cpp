#include <iostream>
using namespace std;

int main() {
	
    int n;
    
    cout << "Enter the value here : ";
    cin >> n;

    for (int x=n; x>=1; x--) {
        if (x % 2 == 0) {
            cout << x <<endl;
        }
    }

    return 0;
}
