#include <iostream>
using namespace std;

void multiplicationTable(int num) 
{
    for (int i = 1; i <= 10; i++) 
	{
        cout << num << " x " << i << " = " << num * i << endl;
    }
}

int main() 
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Table of " << n << ":" << endl;
    multiplicationTable(n);
    return 0;
}
