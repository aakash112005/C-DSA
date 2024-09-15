#include<stdio.h>
int main()
{
	int n,count=0;
	printf("enter the number : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count+=1;
		}
	}
	if(count==2)
	{
		printf("\n%d is prime number",n);
	}
	else
	{
		printf("\n%d is not a prime number",n);
	}
	return 0;
}