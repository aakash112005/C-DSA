#include<stdio.h>
int main()
{
	while(1)
	{
	int i;
	printf ("ENTER 1 FOR TO CONVERT CELSIUS INTO KELVIN \nENTER 2 FOR TO CONVERT KELVIN INTO CELSIUS \nENTER 3 FOR TO CONVERT CELSIUS INTO FARNEHITE \nENTER 4 FOR TO CONVERT FARNEHITE INTO CELSIUS\nENTER 5 FOR TO CONVERT FARNEHITE INTO KELVIN \nENTER 6 FOR TO CONVERT KELVIN INTO FARNEHIT \n");
	scanf ("%d",&i);
	switch (i)
{
  case 1:
  {
  printf  ("\n........................................................................................................................\n");
   printf ("\n            WELCOME INTO clesius to kelvin coverter ");
   float c,k;
   printf ("\n\nenter the celsius temp : ");
   scanf ("%f",&c);
   k=c+273.15;
   printf ("\nkelvin vtemp = %f\n ",k);
   				 printf  ("\n........................................................................................................................\n");
  } break;
  case 2:
  {
  	 printf  ("\n........................................................................................................................\n");
   printf ("\n            WELCOME INTO kelvin to clesius coverter ");
   float c,k;
   printf ("\n\nenter the kelvin temp : ");
   scanf ("%f",&k);
   c=k-273.15;
   printf ("\ncelsius temp = %f\n",c);				 
   				 printf  ("\n........................................................................................................................\n");
   			} break;
  case 3:
  	{
  		 printf  ("\n........................................................................................................................\n");
  printf ("\n            WELCOME INTO celsius to farnehite coverter ");
  float c,f;
  printf ("\n\nenter the celcius temp : ");
  scanf ("%f",&c);
  f=(c*9/5)+32;
  printf ("\nfarnehite temp = %f\n",f);
  				 printf  ("\n........................................................................................................................\n");
    } break;
    case 4:
    	{
    		 printf  ("\n........................................................................................................................\n");
    		printf ("            WELCOME INTO farnehite to celsius coverter ");
    		float c,f;
    		printf ("\n\nenter the farnehite temp :");
    		scanf ("%f",&f);
    		c=(f-32)*5/9;
    		printf ("\ncelcius temp = %f\n",c);
    						 printf  ("\n........................................................................................................................\n");
		} break;
		case 5:
		{
			 printf  ("\n........................................................................................................................\n");
			printf ("\n            WELCOME INTO farnehite to kelvin coverter");
			float f,k;
			printf ("\n\nenter the farnehite temp : ");
			scanf ("%f",&f);
			k=((f-32)*5/9)+273.15;
			printf ("\nkelvin temp = %f\n",k);
							 printf  ("\n........................................................................................................................\n");
		} break;
		case 6:
			{
				 printf  ("\n........................................................................................................................\n");
				printf ("\n         WELCOME INTO kelvin to farnehite coverter");
				float k,f;
				printf ("\n\nenter the kelvin temp : ");
				scanf ("%f",&k);
				f=((k-273.15)*9/5)+32;
				printf ("farnehite temp = %f\n",f);
								 printf  ("\n........................................................................................................................\n");
			} break;
			default: {printf ("\n\n  ERROR     :-    PLEASE ENTER THE VALID VALUE  ... ");}
}
}
}
//sourse formulas :
//c=(f-32)*5/9
//f=(c*9/5)+32
//k=c=273.15
//c=k-273.15
//k=(f-32)*5/9+273.15
//f=(k-273.15)*9/5+32