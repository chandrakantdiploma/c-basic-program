#include<stdio.h>
#include<conio.h>
void main()
{
	float inch=0,feet=0,meter=0,cm=0;
	clrscr();
	printf("\n Enter  the inch:");
	scanf("%f",&inch);
	feet=inch/12;
	printf("\nfeet=%f",feet);
	getch();
}