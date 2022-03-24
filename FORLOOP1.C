// program to print 1 to 10 and their summetion
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,sum=0;
	clrscr();
	for(i=1;i<=10;i++)
	{
		printf("\n %d",i);
		sum=sum+i;
	}
	printf("\n summetion of 1 to 10= %d",sum );
	getch();
}