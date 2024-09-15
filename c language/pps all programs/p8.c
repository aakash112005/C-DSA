#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("enter the number : ");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("%n is even number",n);
	}
	else
	{
		printf("%d is odd number",n);
	}
}