//write a program which display square of a number
//Jadeja Digvijaysinh
#include<stdio.h>
#include<conio.h>

void main()
{
	int x,y,z;
	clrscr();
	printf("\n enter value of x: ");
	scanf("%d",&x);

	y=x*x;
	printf("\n square is %d",y);

	z=y*x;
	printf("\n cube is %d",z);

	getch();
}