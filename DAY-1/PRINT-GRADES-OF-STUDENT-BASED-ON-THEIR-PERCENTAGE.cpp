#include<iostream>
using namespace std;
int main(){
	float pr;
	cout << "Enter your percentage :";
	cin >> pr;
	
	if(pr<100 && pr>90){
		cout << "Your grade is A1 !";
	}
	else if(pr<=90 && pr>80){
		cout << "Your grade is A2 !";
	}
	else if(pr<=80 && pr>70){
		cout << "Your grade is B1 !";
	}
	else if(pr<=70 && pr>60){
		cout << "Your grade is B2 !";
	}
	else if(pr<=60 && pr>50){
		cout << "Your grade is C1 !";
	}
	else if(pr<=50 && pr>40){
		cout << "Your grade is C2 !";
	}
	else if(pr<=40 && pr>33){
		cout << "Your grade is D !";
	}
	else if(pr<=33 && pr>=0){
		cout << "You're a fail in exam !";
	}
	else{
		cout << "Something went wrong !";
	}
	return 0;
}