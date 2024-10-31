#include <iostream>
#include <conio.h>
using namespace std;
float value(char shape, float length);
int main()
{	
	system("cls");
	while(true){
	char shape;
	cout << "Enter character (s: square, c: circle, t: triangle, h: hexagon): ";
	cin >> shape;

	float length;
	cout << "Enter length of one side: ";
	cin >> length;

	float y;
	y= value(shape, length);

	cout << "Perimeter of shape " << shape << " is: " << y << endl;
	
	cout<<"Press any key to terminate the program...";
	getch();
	system("cls");
}
}

float value(char shape, float length)
{	
	float perimeter;
	
	if (shape == 's')
	{
		perimeter = 4 * length;
	}
	else if (shape == 'c')
	{
		perimeter = 2 * 3.14 * length;

	}
	else if (shape== 't')
	{
		perimeter = 3 * length;

	}
	else if (shape == 'h')
	{
		perimeter = 6 * length;

	}
	else
	{
		cout<<"Invalid shape Character."<<endl;
		return 0;
	}
	
				return perimeter;

}
