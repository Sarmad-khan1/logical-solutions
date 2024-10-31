#include <iostream>
using namespace std;
//now i will be dealing with global variables.
int c=45;
int main(){
	int a, b, c;
	cout<<"Enter value of a: ";
	cin>>a;
	cout<<"Enter value of b: ";
	cin>>b;
	c=a+b;
	cout<<"The value of c comes out to be: "<<c<<endl;
	//as i have declared theglobal variable but still the code is not executing the global one but it is executing the local variable. So in order to take action on global variable in the main driver code function I will insert scope resolution operator:: with the c integar to which the variable is assigned in header. so only then it will be executed otherwise local variable is prioritized in our code.
	
	//cout<<"The value of c comes out to be after applying scope resolution to it for executing globally assigned variable: "<<::c<<endl;
	
	
	
	
}