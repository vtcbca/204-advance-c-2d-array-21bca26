/*WAP to create a function marksheet which print student marksheet using UDF
NOTE:marksheet(sid,sname,m1,m2,m3,total,percentage)
Date:31/03/2022*/
#include<stdio.h>
#include<conio.h>
typedef struct student
{
	int sid,m1,m2,m3,total;
	char sname[20];
	float per;
};
void input();
void marksheet(struct student);
void main()
{
	clrscr();
	input();
	getch();
}
void input()
{
	struct student s;
	printf("\nEnter Student I'd:");
	scanf("%d",&s.sid);
	printf("\nEnter student Name:");
	flushall();
	gets(s.sname);
	printf("\nEnter Marks1:");
	scanf("%d",&s.m1);
	printf("\nEnter Marks2:");
	scanf("%d",&s.m2);
	printf("\nEnter Marks3:");
	scanf("%d",&s.m3);
	marksheet(s);
}
void marksheet(struct student x)
{
	x.total=x.m1+x.m2+x.m3;
	x.per=x.total/3;
	clrscr();
	printf("\nStudent I'd: %d",x.sid);
	printf("\nStudent Name: %s",x.sname);
	printf("\nMarks1: %d",x.m1);
	printf("\nMarks2: %d",x.m2);
	printf("\nMarks3: %d",x.m3);
	printf("\nTotal Marks:%d",x.total);
	printf("\nPercentage:%f",x.per);
}


