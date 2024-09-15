#include<stdio.h>
#include<conio.h>
int main()
{
	float l,b,p,a;
	printf ("enter the lenght of rectangle : ");
	scanf ("%f",&l);
	printf ("enter the breath of rectangle : ");
	scanf ("%f",&b);
	p=2*(l+b);
	a=l*b;
	printf ("\narea of rectangle = %0.2lf\n\nperimeter of rectangle = %0.2lf",a,p);
	getch();
}