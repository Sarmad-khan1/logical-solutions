#include <iostream>
using namespace std;
int bill(string day, string month, int amount);
int main()
{
	string day;
	cout<<"Enter the day: ";
	cin>>day;
	
	string month;
	cout<<"Enter the month: ";
	cin>>month;
	
	int amount;
	cout<<"Enter Amount: ";
	cin>>amount;
	
	int payable;
	payable=bill(day, month, amount);
	cout<<"Payable amount after discount is: "<<payable<<endl;
		
}
int bill(string day, string month, int amount)
{	float total=amount;
float tax=0;
	if(day=="sunday" || month == "oct")
	{
		tax=0.2*amount;
		total=amount-tax;
		}
	return total;
	
	
	
	
}