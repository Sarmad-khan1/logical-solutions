#include <iostream>
using namespace std;
float mul(int x, float y);
main()
{
		system("cls");
	int x;
	cout<<"Enter value of x: ";
	cin>>x;
	
	float y;
	cout<<"Enter value of y: ";
	cin>>y;
	
	float m;
	m=mul(x,y);
	cout<<"Result of multiplication of x and y comes out to be: "<<m;
}
float mul(int x, float y)
{
	float product;
	product=x*y;
	return product;
}