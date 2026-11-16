#include<stdio.h>
#include<conio.h>
void main()
{
	int x=13;
	clrscr();

	printf("\n%-30d",x);
	printf("\n %30d",x);
	printf("\n%+30d",x);
	printf("\n%030d",x);

	getch();
}