#include <iostream>
using namespace std;
void sq(int x, float y, int power);
main(){

int x;
cout<<"Insert value: ";
cin>>x;
float y;
cout<<"Insert value: ";
cin>>y;

int power;
cout<<"Exponential Power: ";
cin>>power;


	sq(x, y, power);
	}
	void sq(int x, float y, int power){
					float rate;
					rate=x+y;
					
					float square=1;
					int count=0;
					while(count<power){
							    count=count+1;
							    square=square*rate;
								}	
							cout<<"Exponential comes out to be: "<<square;
							
							}
   