
#include<stdio.h>
#include<conio.h>

int mul(int p,int q);
int sum(int a,int b);
int minus(int p,int q);
void main()
{
 int x=2,y=5,z;
 clrscr();

 z = sum(x,y);
 printf("\n Answer is : %d",z);

 z = minus(x,y);
 printf("\n Answer is : %d",z);

 z = mul(x,y);
 printf("\n Answer is : %d",z);


 getch();
}
int sum(int a,int b)
{
 int c;
 c = a + b;
 return(c);
}

int minus(int p,int q)
{
 int r;
 r = p - q;
 return(r);
}

int mul(int p,int q)
{
 int r;
 r = p * q;
 return(r);
}