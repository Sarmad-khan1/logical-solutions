#include <iostream>
#include <conio.h>
using namespace std;
float totalPrice(string Ttype, int rows, int columns);
int main()
{	while(true){
	string Ttype="";
	cout<<"Enter ticket type please (premiere/normal/discount): ";
	cin>>Ttype;
	
	int rows=0;
	cout<<"Enter number of rows: ";
	cin>>rows;
	
	int columns=0;
	cout<<"Enter number of columns: ";
	cin>>columns;
	
	float totalamount=0.0;
	totalamount=totalPrice(Ttype, rows, columns);
	
	cout<<"Total Payable Amount Comes Out To Be: "<<totalamount<<" Euros."<<endl;
	cout<<"Press Enter to Continue...";
	getch();
	system("cls");
}
	
}
float totalPrice(string Ttype, int rows, int columns)
{
	float totalincome=0.0;
	if(Ttype=="Premiere" || Ttype=="premiere")
	{
		totalincome=rows*columns*12.00;
	}
	else if(Ttype=="Normal" || Ttype=="normal")
	{
		totalincome=rows*columns*7.00;
	}
	else if(Ttype=="Discount" || Ttype=="discount")
	{
		totalincome=rows*columns*5.00;
	}
	else
	{
		totalincome=totalincome;
	}
	return totalincome;
	

}