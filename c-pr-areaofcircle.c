#include <stdio.h>
#include<conio.h>

#define PI 3.14
// Symbolic constant

void main( )

{

float radius,area;

clrscr();
/* variable declarations */

printf (“radius =”);
/ * output statement (prompt) /*

scanf (“%f”, &radius) ;
/* input statement * /

area = PI* radius * radius;
/* assignment statement */

printf ("area = %f",area) ;

getch();

}