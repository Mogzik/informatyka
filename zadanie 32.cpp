#include <cstdlib>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
float a, sigma=0; 
 for (;;) // nieskończona pętla
 { 
 printf("\n Podaj liczbe do sumowania\n"); 
 scanf("%f", &a); 
 if(a>0)
  {
   sigma+=a; // inaczej sigma = sigma + a;
 printf("\n SUMA CZESCIOWA: %f",sigma); 
  
  }else if(a<0)
{
	continue;
} else if (a==0) break;
}
 
 
 printf("Nastapil BREAK \n"); 
 system("PAUSE");
 return EXIT_SUCCESS;
}
