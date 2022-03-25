// program to print even numbers for 1 to 50
#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();

	for(i=1;i<=50;i++)
	{
		if(i%2==0)
		{
			printf("\n%d",i);
		}
	}
	getch();
}