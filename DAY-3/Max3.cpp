#include<iostream>
using namespace std;
int main(){
	int x,y,z;
	cout << "Enter x :";
	cin >> x;
	cout << "Enter y :";
	cin >> y;
	cout << "Enter z :";
	cin >> z;
	
	if(x>y){
		
		if(x>z){
			cout << "x is max";
		}
		else{
			cout << "z is max";
		}
	}
	else
	{
		if(y>z){
			cout << "y is max";
		}
		else{
			cout << "z is max";
		}
	}
	return 0;
}