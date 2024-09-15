
#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0;
	printf("enter the at which you find the sum of numbers : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("sum = %d\n",sum);
}