#include<stdio.h>
#include<conio.h>
void main()
{
	float s1,s2,s3,s4,s5,sum,per,grade;
	printf("enter the marks of first subject  : ");
	scanf("%f",&s1);
	printf("enter the marks of second subject : ");
	scanf("%f",&s2);
	printf("enter the marks of third subject  : ");
	scanf("%f",&s3);
	printf("enter the marks of fouth subject  : ");
	scanf("%f",&s4);
	printf("enter the marks of fifth subject  : ");
	scanf("%f",&s5);
	sum=s1+s2+s3+s4+s5;
	per=(sum/500)*100;
	printf("percentage = %.2lf\n",per);
	if(per>=90&&per<=100)
	{
		printf("GRADE = 'A'");
	}
	else if(per>=80&&per<90)
	{
		printf("GRADE = 'B'");
	}
	else if(per>=60&&per<80)
	{
		printf("GRADE = 'C'");
	}
	else if(per<60)
	{
		printf("GRADE = 'D'");
	}
}