#include<stdio.h>
#include<conio.h>
void main()
{
	float r,c,area;
	printf("enter the radius of circle : ");
	scanf("%f",&r);
	c=2*3.14*r;
	area=3.14*r*r;
	printf("AREA OF CIRCLE = %f\ncircumfrence of circle = %f\n",area,c);
	getch();
}
