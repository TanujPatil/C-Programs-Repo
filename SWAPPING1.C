// program to swap two numbers without using temperory variable
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=20,b=10;
	clrscr();
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the value of a after swapping =%d",a);
	printf( "\nthe value of b after swapping=%d",b);
	getch();


}
