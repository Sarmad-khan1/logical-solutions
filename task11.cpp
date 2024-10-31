#include <iostream>
#include <conio.h>
using namespace std;
bool checker(int num1, int num2, int num3);
int main()
{
	int num1;
	cout<<"Enter first number: ";
	cin>>num1;
	
	int num2;
	cout<<"Enter second number: ";
	cin>>num2;
	
	int num3;
	cout<<"Enter third number: ";
	cin>>num3;
	
	bool returner=checker(num1, num2, num3);
	cout<<returner<<endl;
	
	cout<<"Press Enter to Continue..."<<endl;
	getch();
	system("cls");
	
}
bool checker(int num1, int num2, int num3)
{
	if(num1==num2 && num2==num3)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}