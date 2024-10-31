#include <iostream>
using namespace std;
int main()
{
	system("cls");
	
	cout<<"This is cpp program";
	int age;
	cout<<"Tell me your age: "<<endl;
	cin>>age;
	if(age<18 && age>12)
	{
		cout<<"You can not come to our party."<<endl;
	}
	else if( age==18)
	{
		cout<<"You are a kid and you'll get kid pass to the party. "<<endl;
	}
	
	else if(age>18 && age<30)
	{
		cout<<"You are allowed to drink alcohol because you are young and healthy"<<endl;
	}
	else if(age<12 && age>7)
	{
		cout<<"You are kids but if u want to come then u can join the games part of the part. "<<endl;
	}
	
	
	
	
	return 0;
}