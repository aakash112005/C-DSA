#include<stdio.h>
#include<conio.h>
void main()
{
	float a,b;
	char n;
printf("which operation would you life to perform (+,-,*,/)  :  ");	
	scanf("%c",&n);
printf("enter the first number  : ");
	scanf("%f",&a);
	printf("enter the second number : ");
scanf("%f",&b);
	
	switch(n)
	{
		case '+':
			{
				printf("addition = %.2lf",a+b);
			} break;
		case '-':
			{
				printf("sub = %.2lf",a-b);
			} break;
		case '*':
		{
			printf("multiplication = %.2lf",a*b);
		} break;
		case '/':
			{
				printf("divide = %.2lf",a/b);
			} break;
	}

}