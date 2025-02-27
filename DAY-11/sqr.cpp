#include <iostream>
using namespace std;

int sqr(int num) 
{
    return num * num;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Square of " << n << " is: " << sqr(n) << endl;
    return 0;
}
