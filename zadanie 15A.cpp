#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <cmath>
#include <stdio.h>
using namespace std;
int main(int argc, char *argv[])
{

system("cls");

int iloczynM=1;
int imie, koniec, N;

cout<<"Podaj liczbe liter Twojego imienia:";
cin>>imie;

N=(imie% 4)+ 1;
cout<<"n="<<N<<endl;

koniec=(imie%4)+ 6;
cout<<"koniec="<<koniec<<endl;

while(N<=koniec)
{
	iloczynM=iloczynM *N;
	N++;
}

cout<<"iloczyn wynosi:"<<iloczynM<<"\n";
cout<<"ostatnia liczba:"<<koniec+1<<endl;

system("PAUSE");
return EXIT_SUCCESS;
}
