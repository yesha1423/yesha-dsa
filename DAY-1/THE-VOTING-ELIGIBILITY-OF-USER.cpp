#include<iostream>
using namespace std;
int main()
{
	int age;
	cout << "Enter your age :";
	cin >> age;
	if(age==0 || age>=100){
		cout << "Please enter valid age !";
	}
	else if(age<0){
		cout << "Your age is't correct" << endl;
		cout << "please enter valid age !";
	}
	else if(age<18){
		cout << "You are't eligible for vote !";
	}
	else if(age>=18 && age <100){
		cout << "You are eligible for vote !";
	}
	else{
		cout << "You cannot vote !";
	}
	return 0;
}