#include <iostream>
using namespace std;
void grading(int x, string name);
main(){
string name;
	cout<<"Enter Your Name: ";
	cin>>name;
while(true){
	

	int x;
	cout<<"Enter Your Marks: ";
	cin>>x;

	grading(x, name);
	}
}
void grading(int x, string name){
	
	if(x<=49){
		cout<<"You Got F Grade at "<<x<<" marks"<<endl;
			}
	else if(x>=0 && x<49){
		cout<<"You Got F Grade at "<<x<<" marks"<<endl;
			}

	else if(x>=50 && x<60){
		cout<<"You Got E Grade at "<<x<<" marks"<<endl;	
 			}
 	
	else if(x>=60 && x<70){
		cout<<"You Got D Grade at "<<x<<" marks"<<endl;	
			}

	else if(x>=70 && x<80){
		cout<<"You Got C Grade at "<<x<< "marks"<<endl;
			}
	else if(x>=80 && x<90){
		cout<<"You Got B Grade at "<<x<<" marks"<<endl;
			}

	else if(x>=90 && x<100){
		cout<<"You Got A Grade at "<<x<<" marks"<<endl;
		}
	

}