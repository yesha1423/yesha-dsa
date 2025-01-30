#include<iostream>
using namespace std;
int main()
{
 	int num;
 	cout << "Enter a number :";
 	cin >> num;
 	if(num%7==0){
 		cout << "number is divisible by 7 !"<< endl;
	 }else{
	 	cout << "number is't divisible by 7 !"<< endl;
	 }
 	return 0;
 }