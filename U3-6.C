
#include<stdio.h>
#include<conio.h>
void main()
{
	float salary,hra,ta,da,pf,gross;
	clrscr();

	printf("\n enter your basic salary: ");
	scanf("%f",&salary);

	if(salary>=5000)
		{
			hra=0.05*salary;
			ta=0.06*salary;
			da=0.04*salary;
			pf=0.05*salary;
		}
	else
		{
			hra=0.04*salary;
			ta=0.05*salary;
			da=0.03*salary;
			pf=0.04*salary;
		}

	gross=salary+hra+ta+da-pf;

	printf("\n HRA:%.2f",hra);
	printf("\n TA:%.2f",ta);
	printf("\n DA:%.2f",da);
	printf("\n PF:%.2f",pf);
	printf("\n Gross salary:%.2f\n",gross);

	getch();
}
