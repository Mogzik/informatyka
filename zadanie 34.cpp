#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char *argv[])
{
	system("cls");
    int numer;
    
    cout<<"podaj numer w dzienniku: ";
    cin>>numer;
    cout<<endl;
    
    for(int i =180 + numer; i<=200 + numer; i++) {
    	cout.precision(2);
    	cout<< fixed << "sqrt(" << i << ") = " << sqrt(i) << endl;
	}
    
}
