#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y;
	clrscr();

	printf("\n enter the two number: ");
	scanf("%d%d",&x,&y);

	if(y==0)
	{
		printf("\n division by zero is not posible");
	}

	else if (x%y==0)
	{
		printf("\n divisible by %d",x,y);
	}
	else
	{
		printf("\n not divisible by %d",x,y);
	}

	getch();
}