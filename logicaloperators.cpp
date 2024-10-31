#include <iostream>
using namespace std;
main()
{
	int a=3,b=4;
	cout<<"THe value of a is: ";
	cin>>a;
	cout<<"The value of b is: ";
	cin>>b;
	
	cout<<"The answer of the condition is: "<<(a==b) && (a<=b);
	cout<<endl;
	cout<<"The anwer of the condition is: "<<(a>=b) || (a<b);
	cout<<endl;
	cout<<"The not logical operator gives us following answer: "<<(!(a>=b));
	
	
}