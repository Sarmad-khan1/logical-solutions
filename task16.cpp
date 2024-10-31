#include <iostream>
#include <windows.h>
using namespace std;
void playermove(int x, int y);
void printmaize();
void gotoxy(int x, int y);
main(){
	int x=3,y=4;
	system("cls");
	printmaize();
while(true){	playermove(x,y);
	y=y+1;
	if(y==8){
	y=4;
         }
	
	gotoxy(0,20);		
	}			
	}
void printmaize(){
	cout<<"##################################"<<endl;
	cout<<"#				#"<<endl;
	cout<<"#				#"<<endl;
	cout<<"#				#"<<endl;
	cout<<"#				#"<<endl;
	cout<<"#				#"<<endl;
	cout<<"#				#"<<endl;
	cout<<"#				#"<<endl;	
	cout<<"#				#"<<endl;
	cout<<"#				#"<<endl;
	cout<<"##################################"<<endl;
	}
void gotoxy(int x, int y){
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
	}
void playermove(int x, int y){
	gotoxy(x,y);
	cout<<"p";
	Sleep(200);
	gotoxy(x,y);
	cout<<" ";
	}