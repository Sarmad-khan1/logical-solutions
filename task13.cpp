#include <iostream>
#include <cmath>
using namespace std;
float trig(float x);
float rou(float y);
main(){
	float x;
	cout<<"Enter Number in radians: ";
	cin>>x;
	float y;
	y=trig(x);

	float a;
	a=rou(y);
			
	cout<<"Cosine of "<<x<<" comes out to be: "<<a<<endl;
	
	}

float trig(float x){
	float z;
	z=cos(x);
	return z;	
	}
float rou(float y){
	float b;
	b=ceil(y);
	return b;
	}