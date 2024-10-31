#include <iostream>
#include <conio.h>
using namespace std;
float lowestfare(string time, int distance);
int main()
{
	system("cls");
	while (true)
	{

		string tx1 = "Taxi";
		string tr = "Train";
		string tb = "Bus";

		string time;
		cout << "Travel period of the day (night/day): ";
		cin >> time;

		int distance;
		cout << "Enter Number of Kilometers: ";
		cin >> distance;

		float lowrent;
		lowrent = lowestfare(time, distance);

		if (distance <= 20)
		{
			cout << "The lowest fare for " << distance << " kilometers is: " << lowrent << " Euros" << endl;
			cout << "Suggested Mode of Transportation: " << tx1 << endl;
		}
		if (distance > 20 && distance <= 100)
		{
			cout << "The lowest fare for " << distance << " kilometers is: " << lowrent << " Euros" << endl;
			cout << "Suggested Mode of Transportation: " << tb << endl;
		}
		if (distance > 100)
		{
			cout << "The lowest fare for " << distance << " kilometers is: " << lowrent << " Euros" << endl;
			cout << "Suggested Mode of Transportation: " << tr << endl;
		}

		cout << "Press Enter to Continue...";
		getch();
		system("cls");
	}
}
float lowestfare(string time, int distance)
{
	float pretaxicharges = 0.70;
	float dayTaxiRent = 0.79;
	float nightTaxiRent = 0.90;

	float busRentDayNight = 0.09;

	float trainDayNight = 0.06;

	float fare = 0.0;

	if (distance <= 20)
	{
		if (time == "day")
		{
			fare = pretaxicharges + dayTaxiRent * distance;
		}
		else if (time == "night")
		{
			fare = pretaxicharges + nightTaxiRent * distance;
		}
	}
	if (distance > 20 && distance <= 100)
	{
		if (time == "day" || time == "night")
		{
			fare = busRentDayNight * distance;
		}
	}
	if (distance > 100)
	{
		if (time == "day" || time == "night")
		{
			fare = trainDayNight * distance;
		}
	}
}