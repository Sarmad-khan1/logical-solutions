#include <iostream>
#include <conio.h>
using namespace std;
string speedcheck( int speed);
int main()
{
	system("cls");
	
	int speed;
	cout<<"Enter your vehicle speed: ";
	cin>>speed;
	
	string valueReturner;
	valueReturner=speedcheck( speed );
	
	cout<<"Your are at "<<valueReturner<<endl;
	
	cout<<"Press Enter to Terminate...";
	getch();
	system("cls");
	
	
}
string speedcheck( int speed )
{
	if(speed>10 && speed<50)
	{
		return "Normal Speed.";
	}
	else if(speed>50 && speed<100)
	{
		return "Fast Speed.";
	}
	else if(speed>100 && speed<150)
	{
		return "Ultra Fast Speed. ";
	}
	else
	{
		return "Extremely and deadly Fast Speed.";
	}
	
	
}