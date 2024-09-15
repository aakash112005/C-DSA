#include<stdio.h>
#include<conio.h>
void main()
{
	float s1,s2,s3,s4,s5,sum,percent;
	printf("enter the marks of first subject  : ");
	scanf("%f",&s1);
	printf("enter the marks of second subject : ");
	scanf("%f",&s2);
	printf("enter the marks of third subject  : ");
	scanf("%f",&s3);
	printf("enter the marks of fourth subject : ");
	scanf("%f",&s4);
	printf("enter the marks of fifth subject  : ");
	scanf("%f",&s5);
	sum=s1+s2+s3+s4+s5;
	percent=(sum/500)*100;
	printf("TOTAL MARKS OBTAIN = %f\nPERCENTAGE = %f\n",sum,percent);
	getch();
}