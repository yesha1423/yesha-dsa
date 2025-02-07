#include <iostream>
using namespace std;

int main() {

    int first = 7;
	int second = 10;
    
    cout << first << endl;
    cout << second << endl;

    for (int i=0;i<5;i++) 
	{ 
        first += 1;  
        cout << first << endl;

        second += 1;
        cout << second << endl;
    }

    return 0;
}
