#include <iostream>
using namespace std;
main()
{
	string nam;
	cout<<"Write name:";
	cin>>nam;
	int count=0;
	int capital = 0;
	int smaller = 0;
	
	while(count < nam.length())
	{
		
		if(nam[count] >= 65 && nam[count] <= 90)
		{
			capital = capital + 1;
		}else
		{
			smaller = smaller + 1;
		}
		count = count +1;
	} 
	 cout<<"Total capital are "<<capital<<" ";
	 cout<<"Total smaller are "<<smaller;
	 
}