#include <windows.h> 
#include <iostream> 
#include <conio.h>
#include <stdlib.h> 
void gotoxy(int x, int y );
using namespace std; 
int main() 
{ 
system("chcp 1250");
HANDLE hOut; 
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12| 
FOREGROUND_INTENSITY); 
cout << "+------------------------------------------+"  <<endl <<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12| 
FOREGROUND_INTENSITY); 
cout << "!                                          !"  <<endl <<endl;


 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12| 
FOREGROUND_INTENSITY); 
cout << "+------------------------------------------+"  <<endl <<endl;	
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10| 
FOREGROUND_INTENSITY);	
	
gotoxy(2,3);	
cout << "           Maksymilian Mazgaj"  << endl << endl;
	
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8| 
FOREGROUND_INTENSITY);
	
gotoxy(79,1);
  cout <<"@@@";
gotoxy(77,2);
  cout <<"@@@";
gotoxy(72,3);
  cout <<"|   @@|";
    gotoxy(72,4);
  cout <<"|  @@@|";
	gotoxy(72,5);
  cout <<"| @@@@|";
	gotoxy(72,6);
  cout <<"|@@@@@|";
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4| 
FOREGROUND_INTENSITY);
   gotoxy(55,7);
  cout <<"_________________|_____|____";
    gotoxy(54,8);
  cout <<"/                            \\";
   gotoxy(53,9);
  cout <<"/                              \\";
  gotoxy(52,10);
  cout <<"/                                \\";
  gotoxy(51,11);
  cout <<"/                                  \\";
  gotoxy(50,12);
  cout <<"/____________________________________\\";
 SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6| 
FOREGROUND_INTENSITY);
  gotoxy(49,13);
  cout <<"|       _________     _________        |";
gotoxy(49,14);
  cout <<"|       |       |     |       |        |";
  gotoxy(49,15);
  cout <<"|       |       |     |       |        |";
  gotoxy(49,16);
  cout <<"|       |_______|     |_______|        |";
  gotoxy(49,17);
  cout <<"|                                      |";
  gotoxy(49,18);
  cout <<"|                                      |";
  gotoxy(49,19);
  cout <<"|                                      |";
  gotoxy(49,20);
  cout <<"|                                      |";
  gotoxy(49,21);
  cout <<"|                                      |";
  gotoxy(49,22);
  cout <<"|                                      |";
  gotoxy(49,23);
  cout <<"|_______________ ______ _______________|";
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2| 
FOREGROUND_INTENSITY);
  gotoxy(65,23);
cout <<"|______|";
gotoxy(65,22);
cout <<"|      |";
gotoxy(65,21);
cout <<"|    * |";
gotoxy(65,20);
cout <<"|      |";
gotoxy(65,19);
cout <<"________";












cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
cout<<endl;
   
}

void gotoxy( int x, int y ) 
{
 COORD coord;
 coord.X = x; 
 coord.Y = y; 
 
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord );
 }
