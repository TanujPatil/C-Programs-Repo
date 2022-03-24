// program to swap two numbers using temperory variable
#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10,b=20,temp=0;
	clrscr();
	temp=a;
	a=b;
	b=temp;
	printf("the value of a after swapping =%d",a);
	printf( "\nthe value of b after swapping=%d",temp);
	getch();


}
