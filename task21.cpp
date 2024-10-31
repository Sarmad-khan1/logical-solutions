#include <iostream>
#include <cmath>
using namespace std;
float determinent(int a, int b, int c);
main()
{
	int a;
	cout<<"Enter value of a: ";
	cin>>a;
	int b;
	cout<<"Enter value of b: ";
	cin>>b;
	int c;
	cout<<"Enter value of c:";
	cin>>c;
	float result;
	result=determinent(a,b,c);
	cout<<result;
}
float determinent(int a, int b, int c)
{
	float discriminen;
	discriminen=b^2-4*a*c;
	
	
	
	
	
	
	
}
 