#include<stdio.h>
#include<conio.h>
int main()
{
	while(1)
	{
	int n;
	printf ("\nenter the number : ");
	scanf ("%d",&n);
	if(n>0)
	{
		printf ("\n\n********************************************************************************************\n");
		printf ("the given number is positive number is : positive\n");
		printf ("********************************************************************************************\n");
	}
	if(n==0)
	{
		printf ("\n\n********************************************************************************************\n");
		printf ("the given number is : zero\n ");
			printf ("********************************************************************************************\n");
	}
	if(n<0)
	{
		printf ("\n\n********************************************************************************************\n");
		printf ("the given number is : negative\n ");
			printf ("********************************************************************************************\n");
	}
}
}