#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,add=0,sub=0,mult=0,div=0;
	clrscr();
	printf("\n enter any two numbers");
	scanf("%d%d",&a,&b);

	add=a+b;
	sub=a-b;
	mult=a*b;
	div=a/b;

	printf("\n addition of given two numbers=",add);
	printf("\n substraction of given two numbers=",sub):
	printf("\n multiplication of given two numbers=",mult);
	printf("\n division of given two numbers=",div);

	getch();
}