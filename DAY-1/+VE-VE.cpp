#include<iostream>
using namespace std;
int main(){
	int num;
	cout << "Enter a number :";
	cin >> num;
	if(num==0){
		cout << "The number you are entered is neutral !";
	}
	else if(num>0){
		cout << "The number you are entered is +ve !";
	}
	else if(num<0){
		cout << "The number you are entered is -ve";
	}
	return 0;
}