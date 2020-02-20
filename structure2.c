#include<stdio.h>
#include<string.h>
struct student
{
int sid;
char sname[1000];
int m1,m2,m3;
}s;
void main()
{
struct student s[10],t;
int i,j,total,avg;
printf("Enter the student details:");
for(i=0;i<3;i++)
{
scanf("%d",&s[i].sid);
scanf("%s",s[i].sname);
scanf("%d%d%d",&s[i].m1,&s[i].m2,&s[i].m3);
}
for(i=0;i<2;i++)
{
for(j=i+1;j<3;j++)
{
if(strcmp(s[i].sname,s[i].sname)>0)
{
t=s[i];
s[i]=s[j];
s[j]=t;
}
}
}
for(i=0;i<3;i++)
{
printf("\nStudent %d details",i+1);
printf("student id:%d",s[i].sid);
printf("\nstudent name:%s",s[i].sname);
printf("\nstudent marks:%d,%d,%d ",s[i].m1,s[i].m2,s[i].m3);
total=s[i].m1+s[i].m2+s[i].m3;
avg=total/3;
printf("%d ",total);
printf("%d ",avg);
}
}
