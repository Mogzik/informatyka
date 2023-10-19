#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;
int main(int argc, char *argv[])
{

int m_maz;
int g_maz; 
cout<<"Podaj miesiac urodzenia: ";
cin>>m_maz;
g_maz=m_maz+30;

 
 for ( int i=m_maz; i<=g_maz; i++)
{ 
if(i%2==0)
cout<<" "<<i<<"";
}
 cout<<endl;
 system("PAUSE");
 return EXIT_SUCCESS;
}
