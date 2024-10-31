#include <iostream>
#include <cmath>
using namespace std;
float fr(float x);
main(){	
while(true){			
        float x;
	cout<<"ENTER NUMBER: ";			
	cin>>x;
	
	float y;
	y=fr(x);
	cout<<"Rounded off "<<x<< " to lower nearest integar comes out to be: "<<y<<endl;			
}       
}
float fr(float x){
		    float z;
		    z=floor(x);
			return z;
		
					
			
		           }
