#include<stdio.h>
#include<conio.h>
void main()
{
	int a[2][2],b[2][2],i,j,sum=0;
	clrscr();

	printf("\n Enter Elements of Matrix 1:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}

	printf("\n Enter Elements of Matrix 2:");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n Addition of Matrix 1 and 2:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			sum=a[i][j]+b[i][j];
			printf("\t %d",sum);
		}
		printf("\n");
	}

	getch();
}
