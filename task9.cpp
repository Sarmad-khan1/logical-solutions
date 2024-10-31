#include <iostream>
#include <conio.h>
using namespace std;
int bill(string day, string month , int amount);
int main()
{
	system("cls");
	while(true) {
	string day;
	cout<<"Enter day: ";
	cin>>day;
	
	string month;
	cout<<"Enter the month: ";
	cin>>month;
	
	int amount;
	cout<<"Enter Amount: ";
	cin>>amount;
	
	int y;
	y=bill(day, month, amount);
	cout<<"Payable amount comes out to be: "<<y<<endl;
	
	cout<<"Press Enter to Continue...";
	getch();
	system("cls");
	}
}
int bill(string day, string month, int amount)
{	float tax=0;
	float total=amount;
	if(day=="sunday" || day=="monday")
	{
		if(month=="oct" || month=="aug" || month=="march")
		{
			tax=0.1*amount;
		total=amount-tax;
		}
	}
	if(day=="monday")
	{
		if(month=="nov" || month == "dec")
		{
			tax=0.05*amount;
		total=amount-tax;
		}
	}
	return total;
	
	
}