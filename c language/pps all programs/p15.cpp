
#include<stdio.h>
int main()
{
	int n,n1=0,n2=1,n3;
	printf("enter the number : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("%d",n1);
		n3=n1;
		n3=n1+n2;
		n1=n2;
		n2=n3;
	}
	return 0;
}