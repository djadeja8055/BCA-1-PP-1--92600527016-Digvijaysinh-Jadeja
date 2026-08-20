#include<stdio.h>
#include<conio.h>
void main()
{
	float salary,hra,ta,da,pf,gross;
	clrscr();

	printf("\n enter your basic salary: ");
	scanf("%f",&salary);

	printf("\n enter hra: ");
	scanf("%f",&hra);

	printf("\n enter ta: ");
	scanf("%f",&ta);

	printf("\n enter da: ");
	scanf("%f",&da);

	printf("\n enter pf: ");
	scanf("%f",&pf);

	printf("\n enter gross: ");
	scanf("%f",&gross);

	gross=salary+hra+ta+da-pf;

	printf("\n HRA:%.2f",hra);
	printf("\n TA:%.2f",ta);
	printf("\n DA:%.2f",da);
	printf("\n PF:%.2f",pf);
	printf("\n Gross salary:%.2f\n",gross);

	getch();
}