#include <iostream>
#include <cmath>
using namespace std;
float rou(float x);
main(){
	 float x;
	cout<<"Enter Number: ";	
	cin>>x;

	float y;
	y=rou(x);			
	cout<<"Rou off of "<<x<<" comes out to be: "<<y;	
	}
float rou(float x){
		float z;
		z=ceil(x);
		return z;
		}
