#include <iostream>
using namespace std;
void interestrate(int x, float y, int z);
main(){	
	int x;
	cout<<"Enter Principal Amount taken: ";
	cin>>x;

 	float y;
	cout<<"Interest rate per month: ";
	cin>>y;

	int z;
	cout<<"Time period of debt amount: ";		
	cin>>z;
	interestrate(x, y, z);
        }

void interestrate(int x, float y, int z){
	float rate;
	rate=(x*y*z)/100;
	cout<<"The interest rate for "<<x<<" amount for a period of "<<z<< "month comes out to be :"<<rate;	
	

}