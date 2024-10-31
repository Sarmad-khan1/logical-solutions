#include <iostream>
using namespace std;
int greatestNumber(int num1, int num2, int num3);
int main()
{	
	system("cls");
	int num1=0;
	cout<<"Enter first number: ";
	cin>>num1;
	
	int num2=0;
	cout<<"Enter second number: ";
	cin>>num2;
	
	int num3=0;
	cout<<"Enter third number: ";
	cin>>num3;
	
	int greatestnum=0;
	greatestnum=greatestNumber(num1, num2, num3);
	
	cout<<"The greatest number among "<<num1<<", "<<num2<<", & "<<num3<<", is: "<<greatestnum;
	
	/*cout<<"Press Enter to Continue...";
		
		getch();
		system("cls");
	 	*/
}
int greatestNumber(int num1, int num2, int num3)
{	

	if(num1>num2 && num1>num3)
	{
		return num1;
	}
	else if(num2>num1 && num2>num3)
	{
		return num2;
	}
	else if(num3>num1 && num3>num2)
	{
		return num3;
	}
	else
	{
		return 0;
	}
	
}



//remember while you are returning the value of integar then directly write variable to return nd donot use single quotes for returning the function result because if u do so then function will return a garbage value. so these are small issues to keep in mind always so that next time mistakes to be prevented.