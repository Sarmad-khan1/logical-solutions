#include <iostream>
#include <conio.h>
using namespace std;
string buyDress(string brand, int price, int quantity);
float payableBill(string brand, int price, int quantity);
int calculate(string brand, int price, int quantity);
int main()
{

	system("cls");
	cout << "Welcome to POS management system" << endl
		 << endl;
	while (true)
	{
		string brand;
		cout << "Enter brand: ";
		cin >> brand;

		int price;
		cout << "Enter the price of dress: ";
		cin >> price;

		int quantity;
		string x;
		x = buyDress(brand, price, quantity);
		cout << x << endl
			 << endl;

		cout << "If you want to shop. Enter details Please. ThankYou!!!!" << endl
			 << endl;

	int z=calculate(brand, price, quantity);

		// declaration of variable that will receive the return from the function and will print the result with cout command.

		

		cout << "Press any key to continue..."<<endl<<endl;
		getch();
	}
}
int calculate(string brand, int price, int quantity)
{
	
	if(brand=="MTJ" || brand=="mtj" && price<=1500){
	float y;
		cout << "Enter Number of Items: ";
		cin >> quantity;
		y = payableBill(brand, price, quantity);

		cout << "Total payable amount: ";
		cout << y;
		cout << endl;
	}
	if(brand=="Stitch" || brand=="stitch" && price>=2000)
	{
		float y;
			cout << "Enter Number of Items: ";
		cin >> quantity;
		y = payableBill(brand, price, quantity);

		cout << "Total payable amount: ";
		cout << y;
		cout << endl;
	}
	
}


// conditional function lies below;

string buyDress(string brand, int price, int quantity)
{
	cout << endl;
	if (brand == "MTJ" || brand == "mtj")
	{
		if (price < 1500)
		{
			return "Congratulations, the dress in this price range is available at MTJ outlet.";
			
		}
		else
		{
			return "Sorry for inconvenience, we couldn't meet your requirement.";
			
		}
	}
	if (brand == "stitch" || brand == "Stitch")
	{
		if (price >= 2000)
		{
			return "Congratulations, the dress in this price range is available at STITCH outlet.";
			
		}
		else
		{
			return "Sorry for incovenience, the dress in this price range is missing at STITCH outlet.";
			
		}
	}
}

// calculation function lies below

float payableBill(string brand, int price, int quantity)
{
	float total = 0;
	if (brand == "MTJ" || brand == "mtj")
	{
		total = price * quantity;
	}
	if (brand == "Stitch" || brand == "stitch")
	{
		total = price * quantity;
	}
	return total;
}
