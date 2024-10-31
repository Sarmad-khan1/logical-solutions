#include <iostream>
using namespace std;

bool symmetrical ( int);
int main()

{
	int n;
	bool result;
	cout << "Entr]er three-digit number: ";
	cin >> n;
	
	result = symmetrical(n);
	if ( result == 1)
		cout <<"This is symmetrical";
	if ( result == 0)
		cout << " This is insymmetrical";
	
}

bool symmetrical(int n)

{
	int reminder;
	int quotient;
	
	reminder = n % 10;
	quotient = n / 100;
	if ( reminder == quotient )
	{
		return 1;
	}
	if ( reminder != quotient)
	
	{
		return 0;
	}
}