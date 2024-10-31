#include <iostream>
using namespace std;
void sum(int, int);
main(){
int x;
int y;
cout<<"Enter value of x: ";
cin>>x;
cout<<"Enter value of y: ";
cin>>y;
sum(x,y);
}
void sum(int x, int y){
	int sum;
	sum=x+y;
	cout<<"Sum is: "<<sum;	
	}