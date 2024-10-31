#include <iostream>
using namespace std;
void checker(int number1, int number2);
main(){
while(true){
	int number1;
	cout<<"Enter first number: ";
	cin>>number1;

	int number2;
	cout<<"Enter second number: ";
	cin>>number2;

	checker(number1, number2);
}
}

void checker(int number1, int number2){
	
	if(number1>number2){
	cout<<"False"<<endl;
		}
	else if(number2>number1){
	cout<<"False"<<endl;	
		}
	else if(number1==number2){
	cout<<"True"<<endl;
		}
	

}