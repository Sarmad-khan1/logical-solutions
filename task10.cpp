#include <iostream>
using namespace std;
void op(int x, int y);
main(){
	int x;
	cout<<"Enter value: ";	
	cin>>x;
	
	int y;
	cout<<"Enter value: ";
	cin>>y;
	
	op(x, y);

}
void op(int x, int y){
	int sum;
	sum=x+y;
	if(sum>=10){
			cout<<"Output of sum operation is: "<<sum;
			}			
			
				
		else if(sum>=20 && sum<25){
				cout<<"This is else if sum output: ";
				}
			
			}