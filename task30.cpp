#include <iostream>
using namespace std;
bool ret(int x);
main ()
{	system("cls");
	int x;
	cout<<"Enter a number";
	cin>>x;
	
	int a;
	a=ret(x);
if (a==1)
{
	cout<<"This is symmetrical";
}
if (a==0)
{
	cout<<"This is unsymmetrical";
}
}
bool ret(int x)
{
	int y;
	y=x/100;
	int z;
	z=x%10;
	if(y==z)
	{
		return 1;
	}
	if(y!=z)
	{
		return 0;
	}
	
	
	
}