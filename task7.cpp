#include <iostream>
#include <conio.h>
using namespace std;
float payable(string day, string month, int amount);
int main()
{
	system("cls");
	while(true){
	string month;
	cout << "Enter month: ";
	cin >> month;

	string day;
	cout << "Enter shopping day: ";
	cin >> day;

	int amount;
	cout << "Enter total Purchase amount: ";
	cin >> amount;

	int paytotal = 0;
	paytotal = payable(day, month, amount);
	cout<<"Total payable amount after discount is: "<<paytotal<<endl;
	
	}
	cout<<"Press Enter To Continue...";
	getch();
	system("cls");
}
float payable(string day, string month, int amount)
{	
	float tax = 0;
	float netfinal = amount;
	if (day == "sunday")
	{
		if (month == "november" || month == "nov")
		{
			tax = amount * (0.2 / 100);
			netfinal = amount - tax;
		}
	
	else if (month == "oct" || month == "october")
	{
		tax = amount * (0.5 / 100);
		netfinal = amount - tax;
	}
	}
	 if(day=="monday")
	{
		 if(month == "october" || month =="oct")
		{
			tax=amount*(0.3/100);
			netfinal=amount-tax;
		}
		else if(month=="august" || month=="aug")
		{
		 tax=amount*(0.09/100);
		 netfinal=amount-tax;
		}
	}
	
	return netfinal;
}