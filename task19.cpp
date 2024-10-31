#include <iostream>
using namespace std;
float discount(string nam, int ticket);

main(){
	float d;
	string nam;
	cout<<"Enter Country's Name: ";
	cin>>nam;

	int ticket;
	cout<<"Enter ticket price in dollars: $";
	cin>>ticket;

	
	d=discount(nam,ticket);
	cout<<pay;
	cout<<irdisc;
	cout<<indisc;
	cout<<engdisc
	cout<<candisc;
	cout<<anydiscount;
	
}
float discount(string nam, int ticket){
	if(nam=="pakistan"){
	float dis;
	dis=0.05*ticket;
	float pay=ticket-dis;
	return pay;
	}
	
	if(nam=="ireland"){
	float irdis;
	irdis=0.1*ticket;
	float irdisc=ticket-irdis;
	return irdisc;
	}

	if(nam=="india"){
	float ind;
	ind=0.2*ticket;
	float indisc=ticket-ind;
	return indisc;	
	}

	if(nam=="england"){
	float eng;
	eng=0.3*ticket;
	float engdisc=ticket-eng;
	return engdisc;
	}
	
	if(nam=="canada"){
	float cand;
	cand=0.45*ticket;
	float candisc=ticket-cand;
	return candisc;
	} 
 
	else{
	float any;
	any=0.03*ticket;
	float anydiscount=ticket-any;
	return anydiscount;
		}    
}