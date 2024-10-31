#include <iostream>
#include <conio.h>
using namespace std;
string checktitle(char gender, int age);
int main()
{
	system("cls");
	char gender;
	cout<<"Enter your gender(m/f): ";
	cin>>gender;
	
	int age;
	cout<<"Enter Your Age: ";
	cin>>age;
	
	string receiver;
	receiver=checktitle(gender, age);
	
	cout<<"Your personal title is "<<receiver<<endl;
	
	
	cout<<"Press Enter to Continue...";
	getch(); 
	system("cls");
	
	return 0;
}
string checktitle(char gender, int age)
{
	string gen="";
	if(age>0 && age<=17)
	{
		if(gender=='m')
		{
			return "Master";
		}
		if(gender=='f')
		{
			return "Miss";
		}
	}
	if(age>17)
	{
		if(gender=='m')
		{
			return "Mr.";
		}
		if(gender=='f')
		{
			return "Ms.";
		}
	}
	
	
	
	
}