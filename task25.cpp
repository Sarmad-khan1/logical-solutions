#include <iostream>
using namespace std;
main()
{
	string x;
	cout<<"Enter name: ";
	cin>>x;
	int a=0;
	int cap=0;
	int smlr=0;
	while(a<x.length())
	{
		
		if(x[a]>=65 && x[a]<90)
		{
			
			cap=cap+1;
		}
		else
		{
			smlr=smlr+1;
		}
		a=a+1;
	}
	cout<<"capitals are: "<<cap<<" smallers are "<<smlr<<endl;
	
	
}