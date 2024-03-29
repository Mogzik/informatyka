#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <math.h>
#include <windows.h>


int main()
{
	
system("chcp 1250");
system("color 16");
system("cls");

const double PI_maz = 3.1416;

double Ax_maz, Ay_maz, Bx_maz, By_maz, Cx_maz, Cy_maz, Dx_maz, Dy_maz;

printf("Podaj współrzędne x punktu A: \n");
scanf("%lf",&Ax_maz);
printf("Podaj współrzędne y punktu A: \n");
scanf("%lf",&Ay_maz);

printf("Podaj współrzędne x punktu B: \n");

scanf("%lf",&Bx_maz);
printf("Podaj współrzędne y punktu B: \n");
scanf("%lf",&By_maz);

printf("Podaj współrzędne x punktu C: \n");
scanf("%lf",&Cx_maz);
printf("Podaj współrzędne y punktu C: \n");
scanf("%lf",&Cy_maz);

printf("Podaj współrzędne x punktu D: \n");
scanf("%lf",&Dx_maz);
printf("Podaj współrzędne y punktu D: \n");
scanf("%lf",&Dy_maz);


printf("A (%.2lf, %.2lf)\n", Ax_maz, Ay_maz);
printf("B (%.2lf, %.2lf)\n", Bx_maz, By_maz);
printf("C (%.2lf, %.2lf)\n", Cx_maz, Cy_maz);
printf("D (%.2lf, %.2lf)\n", Dx_maz, Dy_maz);

double ABx_maz = Bx_maz-Ay_maz;
double ABy_maz = By_maz-Ax_maz;

double CDx_maz = Dx_maz - Cy_maz;
double CDy_maz = Dy_maz - Cx_maz;

printf("Współrzędne wektora AB wynoszą: [%.3lf;%.3lf]\n", ABx_maz, ABy_maz);
printf("Współrzędne wektora CD wynoszą: [%.3lf;%.3lf]\n", CDx_maz, CDy_maz);

double dAB_maz = sqrt(ABx_maz*ABx_maz+ABy_maz*ABy_maz);
double dCD_maz = sqrt(CDx_maz*CDx_maz+CDy_maz*CDy_maz);

printf("dv1= %.3lf\n", dAB_maz);
printf("dv1= %.3lf\n", dCD_maz);

double dBD_maz = sqrt(dAB_maz*dAB_maz-dCD_maz*dCD_maz);
double cos_alfa_maz = dCD_maz/dAB_maz;
double sin_alfa_maz = dBD_maz/dAB_maz;
double tan_alfa_maz = sin_alfa_maz/cos_alfa_maz;
double alfa_x_maz = atan(tan_alfa_maz);
double alfa_deg_maz = atan (tan_alfa_maz)*180/PI_maz;

printf("cos_alfa = %.3lf\n", cos_alfa_maz);
printf("sin_alfa = %.3lf\n", sin_alfa_maz);
printf("tan_alfa = %.3lf\n", tan_alfa_maz);
printf("alfa_x = %.3lf\n", alfa_x_maz);
printf("Kąt między wektorami AB i CD wynosi: %.1lf stopni\n", alfa_deg_maz);

return 0;
}
