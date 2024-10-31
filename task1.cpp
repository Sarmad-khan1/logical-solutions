#include <iostream>
using namespace std;
void add(int num1, int num2);
main(){
	int num1=0;
	int num2=0;
	cout<<"Enter number 1: ";
	cin>>num1;
	cout<<"Enter number 2: ";
	cin>>num2;
	add(num1, num2);	
	

	}
void add(int num1, int num2){
	int sum=num1+num2;		
	cout<<"Sum is: "<<sum;
	}