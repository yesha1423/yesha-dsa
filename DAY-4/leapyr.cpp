#include <iostream>
using namespace std;

int main() {
	
    for(int yr=2000;yr<=3000;yr++) 
    
	{
        if ((yr % 4==0 && yr % 100!=0) || (yr % 400==0)) 
        
		{
            cout << yr << endl;
        }
    }

    return 0;
}


 