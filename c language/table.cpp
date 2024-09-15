/* C PROGRAM TO GENRATE THE MULTIPLICATION TABLE 
THE PROCESS IS GIVEN BELOW */
#include<stdio.h>
int main()
{
	int n,i,x,a;
	printf ("enter the number which you want to print the table : ");
	scanf ("%d",&a);
	for(n=1;n<=a;n++)
	{
		for(i=1;i<=10;i++)
		{
			x=i*n;
			printf ("\n%d\n",x);
					break;
		}

	}
}