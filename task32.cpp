#include <iostream>
using namespace std;
string odeven(int x1, int x2, int x3, int x4, int x5);
main()
{
	system("cls");
	int x1;
	cout<<"Enter x1 value: ";
	cin>>x1;
	int x2;
	cout<<"Enter x2 value: ";
	cin>>x2;
	int x3;
	cout<<"Enter x3 value: ";
	cin>>x3;
	int x4;
	cout<<"Enter x4 value: ";
	cin>>x4;
	int x5;
	cout<<"Enter x5 value: ";
	cin>>x5;
	odeven(x1, x2, x3, x4, x5);
	string decider;
	decider=odeven(x1,x2,x3,x4,x5);
	if(decider=="even")
	{
		cout<<"Evenish"<<endl;
	}
	if(decider=="odd")
	{
		cout<<"oddish"<<endl;
	}
}
string odeven(int x1, int x2, int x3, int x4, int x5)
{
	int total;
	total=x1+x2+x3+x4+x5;
	int totalmod;
	totalmod=total%2;
	if(totalmod==0)
	{
		return "even";
	}
if (totalmod==1)
{
	return "odd";
}

}