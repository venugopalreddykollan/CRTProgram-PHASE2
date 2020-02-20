#include<stdio.h>
struct student
{
int sid;
char sname[1000];
int m1,m2,m3;
}s;
void main()
{
struct student s[10];
int i;
printf("Enter the student details:");
for(i=0;i<3;i++)
{
scanf("%d",&s[i].sid);
scanf("%s",s[i].sname);
scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);
}
printf("Details are:\n");
for(i=0;i<3;i++)
{
printf("student id:%d",s[i].sid);
printf("\nstudent name:%s",s[i].sname);
printf("\nstudent marks:%d,%d,%d",s[i].m1,s[i].m2,s[i].m3);
}
}
