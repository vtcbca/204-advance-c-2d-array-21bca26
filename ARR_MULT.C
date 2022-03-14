/*WAP to create two 3*3 matrix and print its multiplication matrix
Date:18/02/2022*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m1[3][3],m2[3][3],i,j,m3[3][3],sum,k,m[3][3];
	clrscr();
	//Logic 1 array
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter value for m1[%d][%d]",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
	//Logic 2 array
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter value for m2[%d][%d]",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	clrscr();
	printf("\n");
	//Logic print 1 array
	printf("\nMATRIX:1\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",m1[i][j]);
		printf("\n");
	}
	printf("\n");
	//Logic 2 array
	printf("\nMATRIX:2\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",m2[i][j]);
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{       sum=0;
			for(k=0;k<3;k++)
			{
				sum=sum+m1[i][k]*m2[k][j];
				m[i][j]=sum;
			}
		}
	}
	printf("\n MULTIPLIVCATION MATRIX:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",m[i][j]);
		}
		printf("\n");
	}
	getch();
}