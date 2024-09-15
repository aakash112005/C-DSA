#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum1=0,sum2=0;
	printf("enter the number : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	  if(i%2==0)
	  {
		sum1+=i;
	  } 
	    else
	   {
		sum2+=i;
    	}
    }
    printf("sum of even numbers upto %d is %d\nsum of odd  numbers upto %d is %d\n",n,sum1,n,sum2);
    
}