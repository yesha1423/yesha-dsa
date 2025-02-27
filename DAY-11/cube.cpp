#include <iostream>
using namespace std;

int cube(int num) 
{
    return num * num * num;
}

int main() 
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Cube of " << n << " is: " << cube(n) << endl;
    return 0;
}
