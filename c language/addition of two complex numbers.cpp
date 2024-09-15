#include<stdio.h>
int main()
{
	int i;
	printf ("ENTER 1 FOR ADDITION \nENTER 2 FOR SUBRACTION\nENTER 3 FOR MULTIPLICATION\nENTER 4 FOR DIVITION \n");
	scanf ("%d\n",i);
	switch (i)
	{
	case 1:
		{
	printf ("FOR ADDITION\n");
	float a,b,c,d;
	printf ("for first complex number enter the : \nreal part \nimagnery part\n ");
	scanf ("%f%f",&a,&b);
	printf ("for second complex number enter the : \nreal part \nimagnery part\n ");
	scanf ("%f%f",&c,&d);
	printf ("the new complex number is : (%0.2lf+%0.2lfi)",a+c,b+d);
} break;
	case 2:
		{
		printf ("FOR SUBRATION\n");
	float a,b,c,d;
	printf ("for first complex number enter the : \nreal part \nimagnery part\n ");
	scanf ("%f%f",&a,&b);
	printf ("for second complex number enter the : \nreal part \nimagnery part\n ");
	scanf ("%f%f",&c,&d);
	printf ("the new complex number is : (%0.2lf+%0.2lfi)",a-c,b-d);
} break;
	case 3:
		{
		printf ("FOR MULTIPLICATION \n");
	float a,b,c,d;
	printf ("for first complex number enter the : \nreal part \nimagnery part\n ");
	scanf ("%f%f",&a,&b);
	printf ("for second complex number enter the : \nreal part \nimagnery part\n ");
	scanf ("%f%f",&c,&d);
	printf ("the new complex number is : (%0.2lf+%0.2lfi)",a*c,b*d);
} break;
	case 4:
		{
		printf ("FOR DIVIDE \n");
	float a,b,c,d;
	printf ("for first complex number enter the : \nreal part \nimagnery part\n ");
	scanf ("%f%f",&a,&b);
	printf ("for second complex number enter the : \nreal part \nimagnery part\n ");
	scanf ("%f%f",&c,&d);
	printf ("the new complex number is : (%0.2lf+%0.2lfi)",a/c,b/d);
} break;
}
} 