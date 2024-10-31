#include <iostream>
#include <cmath>
using namespace std;
int checker(int x, int y);
main(){
	int finalReturn;
	int x;
	int y;
	cout<<"Enter first value: ";
	cin>>x;
	cout<<"Enter second value: ";
	cin>>y;
	
	finalReturn=checker(x,y);
	
	cout<<"Greater Value is :"<<finalReturn;
}
int checker(int x, int y){
	int c;
	c=max(x,y);
	return c;				
}