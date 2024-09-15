//c program to find the simple interset 
// the process is given below
#include<stdio.h>
int main()
{
	float p,r,t,i;
	printf ("enter the principle value : ");
	scanf ("%f",&p);
	printf ("enter the rate : ");
	scanf ("%f",&r);
	printf ("enter the time in year : ");
	scanf ("%f",&t);
	i=((p*r)*t)/100;
	printf ("\n\nsimple interset = %f\n",i);
}
//source there is formula to finding a simple interst 
// (principle*rate*time)/100