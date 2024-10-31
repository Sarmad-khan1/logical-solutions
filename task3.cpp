#include <iostream>
using namespace std;
bool calculation(int num);
int main()
{
	system("cls");
	int num;
	cout << "Enter a three digit number: ";
	cin >> num;

	int x = calculation(num);
	if (x == 1)
	{
		cout <<1;
	}
	else
	{
		cout << 0;
	}
}

bool calculation(int num)
{
	int digitmod = 0;
	int total = 0;
	while (total > 0)
	{
		digitmod = digitmod + num % 10;
		total = total / 10;
	}

	bool numeven = (num % 2 == 0);
	bool toteven = (total % 2 == 0);

	return (numeven == toteven);
}
