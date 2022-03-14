
/*WAP to create 3*3 matrix and check it is diagonal matrix or not
Date;18/02/2022*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int m[3][3],i,j,s=0,c=0;
	clrscr();
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\nEnter value for a[%d][%d]:",i,j);
			scanf("%d",&m[i][j]);
		}
	}
	clrscr();
	//Logic print Matrix
	printf("Matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",m[i][j]);
		printf("\n");
	}
	//Logic Check Matrix is diagonal or not
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{

			if(i!=j)
			{
				if(m[i][j]==0)
					s=1;
			}
			if(i==j)
			{
				if(m[i][j]>0)
					c=1;
			}
		}
	}
	if(s==1 && c==1)
		printf("\nMatrix is  diagonal matrix");
	else
		printf("\nMatrix is not a diagonal matrix");
	getch();
}