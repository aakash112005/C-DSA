#include<stdio.h>
int main()
{
	int n,i,a;
	printf ("enter the number which would you find the factor : ");
	scanf ("%d",&i);
	printf ("factors of %d are : ",i);
	for(n=1;n<=i;n++)
	{
		
		if(i%n==0)
		{
			printf ("\n%d\n",n);
		}
	}
}