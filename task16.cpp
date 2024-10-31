#include <iostream>
#include <conio.h>
using namespace std;
void printer(double remainingmoney, int numberofpeople, string category, double totalticketcost);
int main()
{

	system("cls");
	double ticketpricevip = 499.99;
	double ticketpricenormal = 299.99;

	string category;
	cout << "Enter the ticket category(vip/normal): ";
	cin >> category;

	int numberofpeople;
	cout << "Enter Number of People: ";
	cin >> numberofpeople;

	double budget;
	cout << "Enter Your Budget Please: ";
	cin >> budget;

	double remainingmoney = 0;
	double totalticketcost = 0;
	double moneyneeded = 0;

	if (category == "vip")
	{	double vipticket=499.99;
		if (numberofpeople >= 1 && numberofpeople <= 4)
		{
			remainingmoney = budget * (1 - 0.75);
			totalticketcost = numberofpeople * vipticket;

			printer(remainingmoney, numberofpeople, category, totalticketcost);
			if (remainingmoney > totalticketcost)
			{
				moneyneeded = remainingmoney - totalticketcost;

				cout << "Yes, You have  " << moneyneeded << " euros to buy tickets." << endl;
			}
			else if (remainingmoney < totalticketcost)
			{
				moneyneeded = totalticketcost - remainingmoney;
				cout << "No, you need " << moneyneeded << " euros to buy tickets" << endl;
			}
		}
		if (numberofpeople >= 5 && numberofpeople <= 9)
		{
			remainingmoney = budget * (1 - 0.60);
			totalticketcost = numberofpeople * vipticket;

			printer(remainingmoney, numberofpeople, category, totalticketcost);
			if (remainingmoney > totalticketcost)
			{
				moneyneeded = remainingmoney - totalticketcost;

				cout << "Yes, You have  " << moneyneeded << " euros to buy tickets." << endl;
			}
			else if (remainingmoney < totalticketcost)
			{
				moneyneeded = totalticketcost - remainingmoney;
				cout << "No, you need " << moneyneeded << " euros to buy tickets" << endl;
			}
		}
		if (numberofpeople >= 10 && numberofpeople <= 24)
		{
			remainingmoney = budget * (1 - 0.50);
			totalticketcost = numberofpeople *  vipticket;

			printer(remainingmoney, numberofpeople, category, totalticketcost);
			if (remainingmoney > totalticketcost)
			{
				moneyneeded = remainingmoney - totalticketcost;

				cout << "Yes, You have  " << moneyneeded << " euros to buy tickets." << endl;
			}
			else if (remainingmoney < totalticketcost)
			{
				moneyneeded = totalticketcost - remainingmoney;
				cout << "No, you need " << moneyneeded << " euros to buy tickets" << endl;
			}
		}
		if (numberofpeople >= 25 && numberofpeople <= 49)
		{
			remainingmoney = budget * (1 - 0.40);
			totalticketcost = numberofpeople *  vipticket;

			printer(remainingmoney, numberofpeople, category, totalticketcost);
			if (remainingmoney > totalticketcost)
			{
				moneyneeded = remainingmoney - totalticketcost;

				cout << "Yes, You have  " << moneyneeded << " euros to buy tickets." << endl;
			}
			else if (remainingmoney < totalticketcost)
			{
				moneyneeded = totalticketcost - remainingmoney;
				cout << "No, you need " << moneyneeded << " euros to buy tickets" << endl;
			}
		}
		else
		{
			remainingmoney = budget * (1 - 0.25);
			totalticketcost = numberofpeople *  vipticket;
			printer(remainingmoney, numberofpeople, category, totalticketcost);
			if (remainingmoney > totalticketcost)
			{
				moneyneeded = remainingmoney - totalticketcost;

				cout << "Yes, You have  " << moneyneeded << " euros to buy tickets." << endl;
			}
			else if (remainingmoney < totalticketcost)
			{
				moneyneeded = totalticketcost - remainingmoney;
				cout << "No, you need " << moneyneeded << " euros to buy tickets" << endl;
			}
		}
	}
	cout << "Press Enter to Terminate...";
	getch();
	system("cls");
}
void printer(double remainingmoney, int numberofpeople, string category, double totalticketcost)
{

	cout << "Press enter to find calculations" << endl;
	getch();

	cout << "You have " << remainingmoney << " euros left" << endl;
	cout << "Total Ticket costs for " << numberofpeople << " people in " << category << " comes out to be: " << totalticketcost << endl;
}
