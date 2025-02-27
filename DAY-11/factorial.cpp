#include <iostream>
using namespace std;

int factorial(int num) 
{
    int fact = 1;
    for (int i = 1; i <= num; i++) 
	{
        fact *= i;
    }
    return fact;
}

int main() 
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Factorial of " << n << " is: " << factorial(n) << endl;
    return 0;
}
