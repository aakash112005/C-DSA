//c program to check the given number is prime or not 
#include<stdio.h>
int main()
{
  int n,i,count=0;
  printf ("enter the number : ");
  scanf ("%d",&n);
  for(i=1;i<=n;i++)
  {
  	if(n%i==0)
  	{
  		count++;
	  }
  }
  if(count==2)
  {
  	printf ("\n%d is prime numbere",n);
  }
  else
  {
  	printf ("\n%d is not a prime number",n);
  }
  getch();
}
/* process how this program rums
prime number only have a two factors so in this program we count the factors of a given number and on the basic of count value we will decide the given number is prime or not */