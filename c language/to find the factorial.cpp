// c program to find the factroial od
#include<stdio.h>
int main()
{
	int n=1,x;
int f=1;
	printf ("\n\nenter the number  : ");
	scanf ("%d",&x);
	for(n=1;n<=x;n++)
	{
		f *=n;
	}
printf ("fact of %d = %d",x,f);
}