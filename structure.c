#include<stdio.h>
struct student
{
int sid;
char sname[1000];
int m1,m2,m3;
}s;
void main()
{
printf("Enter the student details:");
scanf("%d",&s.sid);
scanf("%c",&s.sname);
scanf("%d%d%d",&s.m1,&s.m2,&s.m3);
printf("Details are:\n");
printf("student id:%d",s.sid);
printf("\nstudent name:%s",s.sname);
printf("\nstudent marks:%d,%d,%d",s.m1,s.m2,s.m3);
}
