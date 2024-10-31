#include <iostream>
using namespace std;
bool numb(int num, int numb2);
int main()
{
	int num=0;
	cout<<"Enter first numb: ";
	cin>>num;
	
	int numb2=0;
	cout<<"Enter second numb: ";
	cin>>numb2;
	
	
  int x= numb(num, numb2);
	cout<<x;
	
	
}
bool numb(int num, int numb2)
{
	if(num>numb2)
	{
		return 1;
	}
	
	else if(num<=numb2)
	{
		return 0;
	}
}