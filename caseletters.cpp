#include <iostream>
using namespace std;
int grop(string nam);
main()
{
	system("cls");
string nam;
cout<<"Enter the name: ";
cin>>nam;

int gr=grop(nam);

cout<<"Capital Letters in "<<nam<<" comes out to be :"<<gr<<endl;
cout<<"Small Letters in "<<nam<<" comes out to be "<<nam.length()-gr;



}
int grop(string nam)
{
	int count=0;
	int capitalLetter=0;
	int smallLetter=0;
	while(count<nam.length())
	{
		if(nam[count]>65 && nam[count]<90){
			 capitalLetter=capitalLetter+1;
			 
		}
		
		count=count+1;
	}
	return capitalLetter;
	
	
}