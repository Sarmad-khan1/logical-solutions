#include <iostream>
using namespace std;
int sum(int n);
main()
{
	int n;
	cout<<"Enter positive integar: ";
	cin>>n;
	
	int x;
	x=sum(n);
	cout<<"Sum of natural numbers from 1 to "<<n<<" is: "<<x<<endl;
	
	
}
int sum(int n)
{
	int a;
	a=0;
	int count=1;
	while(count<=n)
	{
		a=a+count;
		count=count+1;
		
	}
	return a;
}