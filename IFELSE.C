#include<stdio.h>
#include<conio.h>
void main()
{
	float c,f=0;
	clrscr();
	printf("\nEnter the temperature in celsius");
	scanf("%f",&c);
	if(c<=0)
	{
		printf("\nPlease enter the temperature in positive no");
	}
	else
	{
		f=(c*1.8)+32;
		printf("\nFahrenhiet = %f",f);
	}
	getch();
}