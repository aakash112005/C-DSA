#include<stdio.h>
#include<conio.h>
int main()
{
while(1)
	{
	char c;
	printf ("enter the charcter : ");
	scanf ("%c",&c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	{
		printf (" given alphabet is vowel");
	}
	else
	{
		printf ("given alphabet is consonat");
	}
	
}
	getch();
}