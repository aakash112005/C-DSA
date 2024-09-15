#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float p,r,t,si,ci;
	printf("enter the principke amount : ");
	scanf("%f",&p);
	printf("emter the rate of intrest  : ");
	scanf("%f",&r);
	printf("enter the time peroid      :  ");
	scanf("%f",&t);
	si=(p*r*t)/100;
	ci=p*(pow((1+r/100),t));
	printf("SIMPLE INTREST = %f\ncoumpund intrest = %f\n",si,ci);
	getch();
}
