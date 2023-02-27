#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <math.h>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
 system("chcp 1250");
 system("cls");
 
 const double PI_maz = 3.1416;
 const int c_maz = 30;
 double a_maz;

 printf("Podaj bok a trójkąta --> ");
scanf("%lf",&a_maz);
 
 double b_maz = sqrt(pow(c_maz, 2) - pow(a_maz, 2));
 printf("Bok trójkąta = %.3lf cm\n", b_maz);
 
 double p_maz = (a_maz*b_maz)/2;
  printf("Pole trójkąta = %.3lf cm^2\n", p_maz);
  
 double cos_alfa_maz = b_maz/c_maz;
 printf("Cosinus alfa = %.3lf\n", cos_alfa_maz);

 double sin_alfa_maz = a_maz/c_maz;
  printf("Sinus alfa = %.3lf\n", sin_alfa_maz);
 
 double tg_alfa_maz = a_maz / b_maz;
  printf("Tangens alfa = %.3lf\n", tg_alfa_maz);
  
 double alfa_maz =atan(tg_alfa_maz)*180/PI_maz;
  printf("Kąt alfa = %.3lf", alfa_maz);
  cout<<" stopni";

 return 0;
}


