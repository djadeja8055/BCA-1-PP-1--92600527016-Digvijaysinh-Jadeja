//write a program to display circle of area
//jadeja Digvijaysinh
#include<stdio.h>
#include<conio.h>

void main()
{
	float radius,area;
	clrscr();
	printf("enter the radius of the circle");
	scanf("%f",&radius);
	area=3.14159 * radius * radius;
	printf("area of the circle is %2f\n",area);
	getch();
}