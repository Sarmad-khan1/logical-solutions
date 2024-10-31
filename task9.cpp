#include <iostream>
#include <cmath>
using namespace std;
float squareRoot(float x);
main(){
while(true){
	float y;
	float x;
	cout<<"Enter the number: ";
	cin>>x;
	
	y=squareRoot(x);
	cout<<"The square root of "<<x<<" is: "<<y<<endl;		
	}	}
float squareRoot(float x){
			float a;
			a=sqrt(x);
			return a;		
			}