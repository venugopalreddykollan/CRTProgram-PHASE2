#include<stdio.h>
void main()
{
int i,runs=0;
char *a;
for(i=0;i<6;i++)
scanf("%c",a+i);
for(i=1;i<6;i++)
{
if(*(a+i)!='w')
runs=runs+*(a+i)-48;
printf("Total score:%d",runs);
for(i=0;i<4;i++)
{
if((*(a+i)==*(a+i+1))&&(*(a+1)==*(a+i+2)))
{
if(*(a+i)=='4')
printf("\n Hat-Trick Four");
if(*(a+i)=='6')
printf("\n Hat-trick Six");
if(*(a+i)=='w')
printf("\n Hat-trick Wicket");
}
}
}
}
