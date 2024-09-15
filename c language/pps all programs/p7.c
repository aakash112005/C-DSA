#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b,c;
	printf("enter the first number  : ");
	scanf("%f",&a);
	printf("entert he second number : ");
	scanf("%f",&b);
	printf("enter the third number  : ");
	scanf("%f",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("a is greatest");
		}
	}
	else
	{
		if(b>c)
		{
			printf("b is greatest");
		}
		else
		{
			printf("c is greatest");
		}
	}
}