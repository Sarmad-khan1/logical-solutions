#include <iostream> 
using namespace std;
int main()
{
	
	system("cls");
	while(true){
	float marks=0;
	cout<<"Please Enter Your  Marks: ";
	cin>>marks;
	
	float passingMarks=50.0;
	
	
	float passedNumbers;
	if(marks>=51)
	{
		passedNumbers=marks-50;
		cout<<"You have passsed with "<<passedNumbers<<" marks"<<endl;
		cout<<endl<<endl;
	}
	else
	{
		int passedNumbers=50-marks;
		cout<<"You have failed with "<<passedNumbers<<" marks"<<endl;
		
	}
	cout<<"Passing Marks are: "<<passingMarks<<endl;
	cout<<endl;
	}
}