#include <iostream>
#include <cmath>
using namespace std;
float height(float x, float y);

main(){
	float x;
	cout<<"Enter Distance Length: ";
	cin>>x;
	
	float y;
	cout<<"Enter angle: ";
	cin>>y;
	
	float b= height(x,y);
	cout<<b;
	


	
	

    }
float height(float x, float y){
			float b;
			float radiance= y/57.2958;	
			b=x*(tan(radiance));
			return b;		
					
					
				
			}
