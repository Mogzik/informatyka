#include <iostream>
#include <cstdlib>
#include <stdio.h>



using namespace std;
int main(int argc, char** argv)
{
	system("chcp 1250");
	system("cls");
	
	int A;
	int B;
	int C;
	int D;
	int E;
	
	 cout<<"Podaj Pierwszą Liczbę    A=";
	 cin>>A;
	 cout<<endl;
	 
	 cout<<"Podaj Drugą Liczbę       B=";
	 cin>>B;
	 cout<<endl;
	 
	 cout<<"Podaj Trzecią Liczbę     C=";
	 cin>>C;
	 cout<<endl;
	 
	 cout<<"Wczytane są liczby:      A="<<A<<"  B="<<B<<"  C="<<C<<endl;
	
	
	D=A+B+C;
	cout<<D<<"="<<A<<"+"<<B<<"+"<<C<<endl;
	
    E=D*D*D;
    cout<<E<<"= ("<<A<<"+"<<B<<"+"<<C<<")^3"<<endl;	 	 
	 
	return 0;
}
