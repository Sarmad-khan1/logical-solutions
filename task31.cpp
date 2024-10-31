#include <iostream>
using namespace std;
bool symetry(int x);
main()
{
	int x;
	cout<<"Enter value: ";
	cin>>x;
	
	int a;
	a=symetry(x);
	if(a==1)
	{
		cout<<"This is symetrical";
	}
	if(a==0)
	{
		cout<<"This is not symetrical";
	}
}
bool symetry(int x)
{
	int q;
	q=x/100;
	int w;
	w=x%10;
	if (q==w)
	{
		return 1;
	}
	if (q!=w)
	{
		return 0;
	}
	
	
	
}