#include<stdio.h>
#include<conio.h>
void main()
{
	float t,f;
	printf("enter the temperture in celcius  :  ");
	scanf("%f",&t);
	f=(t*1.8)+32;
	printf("temperature in fahrenheit = %f\n",f);
	getch();
}
