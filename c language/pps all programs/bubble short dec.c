#include<stdio.h>
void main()
{
	int n,a[10],i,j,temp;
	printf("enter the size of array : ");
	scanf("%d",&n);
	printf("enter the elements of array : \n");
	for(i=0;i<n;i++)
	{
		printf("%d : ",i);
		scanf("%d",&a[i]);
    }
    
   for(i=n-1;i>=0;i--)
    {
    	for(j=i-1;j>=0;j--)
    	{
    		if(a[i]>a[j])
    		{
    			temp=a[j];
    			a[j]=a[i];
    			a[i]=temp;
			}
		}
		}
    printf("Sorted array\n");
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    	
	}
    
	}