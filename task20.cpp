#include <iostream>
#include <cmath>
using namespace std;
float angle(int distance, int ang);
main()
{
while(true){
	int distance;
	cout<<"Enter distance of your position: ";
	cin>>distance;
	int ang;
	cout<<"Enter Angle in degrees: ";
	cin>>ang;
	
	float finallength;
	finallength=angle(distance, ang);
	cout<<"Height of the tree comes out to be: "<<finallength<<endl;
}
}
float angle(int distance, int ang)
{
	float x;
	x=ang/57.3;
	float y;
	y=distance*(tan(x));
	return y;	
}