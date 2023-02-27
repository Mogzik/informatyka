#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[])
{
	system("chcp 1250");
int a_maz, b_maz;
float iloraz;

cout<<"Podaj liczbę a ";
cin>>a_maz;
cout<<endl;

cout<<"Podaj liczbę b ";
cin>>b_maz;
cout<<endl;

cout<<"Suma = "<<a_maz+b_maz;
cout<<endl;

cout<<"Różnica = "<<a_maz-b_maz;
cout<<endl;

cout<<"Iloczyn = "<<a_maz*b_maz;
cout<<endl;

cout<<"Iloraz = "<<1.0*a_maz/b_maz;
cout<<endl;

cout<<"Reszta z Dzielenia = "<<a_maz%b_maz;
cout<<endl;
}
