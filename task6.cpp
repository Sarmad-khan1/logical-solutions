#include <iostream>
using namespace std;
void squaring(int x, int y);
main(){

	int x;
	cout<<"Enter value: ";
	cin>>x;

	int y;
	cout<<"Enter power: ";
	cin>>y;
	
	squaring(x, y);

}


void squaring(int x, int y){

	float sq=1;
	int count=0;
	while(count<y){
		count=count+1;
		sq=sq*x;
	
	}
	cout<<"Exponential of input number comes out to be: "<<sq;
		
		
		}