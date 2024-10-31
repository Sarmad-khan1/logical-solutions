#include <iostream>
using namespace std;
main()
{
		system("cls");
	string x;
	cout<<"Enter statement: ";
	cin>>x;
	int y;
	cout<<"Enter printing times: ";
	cin>>y;
	int z=0;
	int t=y;
	while(z<y)
	{
		cout<<t<<") "<<x<<endl;
		z=z+1;
		t=t-1;
	}
	
	
}