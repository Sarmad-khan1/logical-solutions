#include <iostream>
using namespace std;
void mul(int, int);
main(){
int x;
cout<<"Enter number: ";
cin>>x;
int y;
cout<<"Enter number: ";
cin>>y;

 mul(x,y);
}
void mul(int x, int y){
int product;
product=x*y;
cout<<"The product comes out to be: "<<product;

}