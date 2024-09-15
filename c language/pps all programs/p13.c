#include<stdio.h>
#include<conio.h>
void main()
{
int n,f=1;
printf("enter the number : ");
scanf("%d",&n);
for(int i=1;i<=n;i++)
    {
	f*=i;
	}
	printf("factorial of %d = %d",n,f);
}
