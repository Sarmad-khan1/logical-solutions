#include <iostream>
#include <cmath>
using namespace std;
int check(int x, int y);
int main(){
	int finalReturn;
	int x;
	int y;
	cout<<"Enter first number ";
	cin>>x;
	cout<<"Enter second number ";
	cin>>y;
	finalReturn=check(x,y);
cout<<finalReturn;
}
int check(int x, int y){
	int c= min(x,y);
	return c;
	
	
	}