#include <iostream>
using namespace std;
string restorer(string x);
main()
{ 	system("cls");
	char x;
	cout<<"Enter single alphabet: ";
	cin>>x;
	x=x+26;
	cout<<x;
	
	
	//string final;
	//final=restorer(x);
	//	cout<<"You have Entered "<<final<<" capital case "<<x<<endl;
	//	cout<<"You have Entered "<<final<<" small case "<<x<<endl;
}
string restorer(string x)
{
	string y=x;
	int count=0;
	int capital=0;
	int small=0;
	while(count<y.length()){
	if(x[count]>65 && x[count]<95 )
	{
		
		capital=capital+1;
	
	}
	
	
	else
	{
		small=small+1;
	
		
	}
	count=count+1;
}
	
	
	
	
	
}