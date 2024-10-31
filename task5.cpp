#include <iostream>
using namespace std;
void interestrate(int x, float y, int z);
main(){
int x;
cout<<"principal amount in (PKR): ";
cin>>x;

float y;
cout<<"Interest rate per annum in (%): ";
cin>>y;

int z;
cout<<"Number of compounding years: ";
cin>>z;

interestrate(x,y,z);
}

void interestrate(int x, float y, int z){
	float rate;
	rate=x*(1+y/100);
	
	float finalrate=1;
	int count=0;
	while(count<z){
			count=count+1;
		finalrate=finalrate*rate;
			}
		cout<<finalrate;


}