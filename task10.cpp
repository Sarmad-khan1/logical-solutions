


#include <iostream>
#include <cmath>
using namespace std;
float cbr(float x);
main(){
	float x;
	cout<<"Enter Number: ";
	cin>>x;
	
	float y;


	y=cbr(x);
	
	cout<<"Cube root of "<<x<<" comes out to be: "<<y;

}
float cbr(float x){
		float a;
	 	a=cbrt(x);
		return a;
		}
