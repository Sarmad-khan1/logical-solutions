#include <iostream>
#include <string>
using namespace std;
int caseletter(string name);
main()

{	system("cls");
	string name;
	cout<<"Enter your name: ";
	cin>>name;
	cout<<"The name is: "<<name<<endl;
	cout<<"The length of name is: "<<name.length()<<endl;
	cout<<"The slicing of name comes out to be: "<<name.substr(0,5)<<endl;
	
	
	int capital =caseletter(name);
	
	//yahan a kr capital me function ki value store ho gye hai aur ab agay next step me hum ne total lenghth of name mese capital case letters ki lenght minus krdi to hamra ps as a result number of small case letters aa chhukay hain.
	
	int small = name.length() - capital;
	
	
	//  basically name.length command k maqsad hamara ps name ki lenght ki information dena ha  k name ki kitni length hai.
	
	cout<<"Total capital "<<capital;
	cout<<"Total small "<<small;
}


int caseletter(string name)
{
	
int count=0;
int capital=0;
//int temp=name.length();
while(count<name.length())
{
	
	if(name[count]>65 && name[count]<90)
	{
		 
		 
		 //oper wala step me hum ne name[count] kia ha aur is trah count me hamra ps name ki backend pr jo integar value store hai wo a chuki ha.. aur jb if condition laga di gye hai to us sa hua ye ha key hamara if k darmeyan jo jo value pr jo jo letter pra ha wo letter cout sa print ho raha ha .. if condition me 65 sa 90 tk ki range me jo jo letter ata hn wo capital case leters hota hn aur hm ne woihi letters print krwana  ha. sb sa pehla hm  ne un lettrs ko store krlia nd next ja k unko cout sa print kr lia ha..ab jitna letters capital case ki range me a rha hngy wo store hoty jaengy or at the end hm ne unko return kra dena ha driver code me. 
		 
		 
		 
		 capital=capital+1;
	}
	count=count+1;
}

return capital;


//yahan hm ne loop sa bahir return use kia ha taka at the end pr hamara loop terminate na ho or function terminate na ho aur hame desired result hasil ho saka... agr return ko function k ander use kr leta to first trip of loop me hi function terminate ho jata...
		
}