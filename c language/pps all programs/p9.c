#include<stdio.h>
#include<conio.h>
void main()
{
	int y;
	printf("enter the year : ");
	scanf("%d",&y);
	if(y%400==0)
	{
		printf("%d is leap year ",y);
	}
	else if(y%100==0)
	{
		printf("%d is not leap year",y);
	}
	else if(y%4==0)
	{
		printf("%d is leap year",y);
	}
	else
	{
		printf("%d is not leap year",y);
	}
}