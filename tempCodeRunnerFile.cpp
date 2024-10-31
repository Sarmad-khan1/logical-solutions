#include <iostream>
using namespace std;
float lowestfare(string time, int distance);
int main()
{
	system("cls");
		
	string time;
	cout<<"Travel period of the day (night/day): ";
	cin>>time;
	
	int distance;
	cout<<"Enter Number of Kilometers: ";
	cin>>distance;
	
	float lowrent;
	lowrent=lowestfare(time, distance);
	cout<<"The lowest fare for "<<distance<< " kilometers is: "<<lowrent<<endl;
	
	
	
}
float lowestfare(string time, int distance)
{
	
	float dayTaxiRent = 0.79;
	float nightTaxiRent = 0.90;
	
	float busRentDayNight = 0.09;
	
	float trainDayNight = 0.06;
	
	float fare = 0.0;
	
	if(distance<=20)
	{
		if(time=="day")
		{
			fare= 0.70 + dayTaxiRent * distance;
		}
		else if(time=="night")
		{
			fare= 0.70 + nightTaxiRent * distance;
		}
	}
	if(distance>20 && distance<=100)
	{
		if(time=="day" || time=="night")
		{
			fare = busRentDayNight * distance;
		}
	}
	if(distance>100)
	{
		if(time=="day" || time == "night")
		{
			fare = trainDayNight * distance;
		}
	}
	
	
	
}