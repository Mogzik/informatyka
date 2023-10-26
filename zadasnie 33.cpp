#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
cout<<endl;
for (int i=33; i<255; i++) {
    cout<<"kod znaku "<<i<<" ";
    cout<<(char)i <<"\t\t";
   
    if (i%3==0) {
    	cout<<endl;
	}

 if(i%(20*3)==0){
 	cout<<endl;
 	system("PAUSE");
 	system("cls");
 }
}
}
