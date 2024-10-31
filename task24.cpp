#include <iostream>
using namespace std;
main()
{
	string nam;
	cout<<"Enter your name: ";
	cin>>nam;
	int count;
	count=0;
	int capital=0;
	int smaller=0;
	while(nam.length())
	{
		if(nam[count]>=65 && nam[count]<90)
		{
			capital=capital+1;
			
		}
		else
		{
			smaller=smaller+1;
		}
	
	
	}
	cout<<"Smaller letters in "<<nam<<" are: "<<smaller<<endl;
	cout<<"Capital letters in "<<nam<<" are: "<<capital<<endl;
		
}


