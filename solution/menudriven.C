/* Write a menudriven program to perform folloeing task using different function category
1:Prime number
2:Palindrome number
3:Reverse number
4:Print even number till N
5:Exit
Date:14/03/2022*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void PrimeNo();
void Palindrom(int);
int Reverse();
int Even(int);
int Menu();

void main()
{
	int a,c;
	char yn;
	do{
		clrscr();
		c=Menu();
		switch(c)
		{
			case 1:
				PrimeNo();
				break;
			case 2:
				printf("\nEnter any number");
				scanf("%d",&a);
				Palindrom(a);
				break;
			case 3:
				c=Reverse();
				printf("\nReverse number is:%d",c);
				break;
			case 4:
				printf("\nEnter any number");
				scanf("%d",&a);
				c=Even(a);
				break;
			case 5:
				exit(0);
			default:
				printf("\nInvalid number \n\t Please Enter number between 1 to 5");
				break;
		}
	printf("\n Do you want to continue? yes=Y/y No=N/n:");
	flushall();
	scanf("%c",&yn);
	}while(yn=='Y'||yn=='y');
	getch();
}
int Menu()
{
	int choice;
	printf("\n\tMENU");
	printf("\n----------------------");
	printf("\n 1:Prime no\n2:Palindrom number \n3:Reverse number \n4:Print even number series till \n5:Exit");
	printf("\n----------------------");
	printf("\n Enter your choice:");
	scanf("%d",&choice);
	return(choice);
}
void PrimeNo()
{
	int no,i,c=0;
	printf("\n Enter any value:");
	scanf("%d",&no);
	for(i=2;i<no;i++)
	{
		if(no%i==0)
		{
			c=1;
			break;
		}
	}
	if(c==1)
		printf("\nThis is not a prime number");
	else
		printf("\n This is a prime number");
}
void Palindrom(int x)
{
	int b,c,s=0;
	c=x;
	while(x>0)
	{
		b=x%10;
		s=b+s*10;
		x=x/10;
	}
	if(c==s)
		printf("\n %d is Palindrom number",s);
	else
		printf("\n %d is not Palindrom number",s);
}
int Reverse()
{
	int x,y,c,s=0;
	printf("\n Enter any number:");
	scanf("%d",&x);
	c=x;
	while(x>0)
	{
		y=x%10;
		s=y+s*10;
		x=x/10;
	}
	return(s);
}
int Even(int x)
{
	int i;
	for(i=2;i<x;i++)
	{
		if(i%2==0)
			printf("\n %d",i);
	}
	return(i);
}



