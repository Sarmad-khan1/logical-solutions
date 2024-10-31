#include <iostream>
using namespace std;
void  reverse(string cb1);
main(){
	while(true){
	string cb1;
	cout<<"Write the checker: ";
	cin>>cb1;
	

	reverse(cb1);
}
}
void reverse(string cb1){
	if(cb1=="true"){
	cout<<"False"<<endl;
	}	
	else if(cb1=="false"){
	cout<<"True"<<endl;
	}
	

}