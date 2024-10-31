#include <iostream>
using namespace std;
void factorial(int x);
main(){

	int x;
	cout<<"Enter number";
	cin>>x;
	factorial(x);	
}
void factorial(int x){
		       float fact;
			fact=x*(x-1);
			float y=1;
			int z=0;
			while(z<x){
				   z=z+1;
				   y=y*fact;	
					}			
			      cout<<"Factorial of input comes out to be: "<<y;
				}