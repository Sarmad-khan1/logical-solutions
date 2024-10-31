#include <iostream>
#include <cmath>
using namespace std;
int power(int x, int y);
main(){
	int pw;
	int x;
	cout<<"Enter number: ";
	cin>>x;

	int y;
	cout<<"Enter power: ";	
	cin>>y;

	pw=power(x,y);
	cout<<x<<" raised to power "<<y<<" is:"<<pw;

 }
int power(int x, int y){
	int b=pow(x,y);
	return b;		
		}