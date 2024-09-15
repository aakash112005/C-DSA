#include<stdio.h>
void main()
{
	int dec,bin[10],a,b,c;
	printf("enter the number : ");
	scanf("%d",&dec);
	for(a=0;dec>0;a++)
	{
		bin[a]=dec%2;
		dec=dec/2;
	}
	for(a=a-1;a>=0;a--)
	{
		printf("%d",bin[a]);
	}
}