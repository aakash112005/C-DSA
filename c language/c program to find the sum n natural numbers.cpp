#include<stdio.h>
int main ()
{
	while(1)
	{
	
	long int n,sum;
	printf ("\nenter the number at which you would find the sum : ");
	scanf ("%d",&n);
	sum=n*(n+1)/2;
	printf ("\nsum = %d",sum);
}
}