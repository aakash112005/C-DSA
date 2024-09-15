#include<stdio.h>
int main()
{
	int n,rem=0,rev=0;
	printf("enter the number : ");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		rem=n%10;
			
		rev=(rev*10)+rem;
			n=n/10;
	}
	printf("%d",rev);
}