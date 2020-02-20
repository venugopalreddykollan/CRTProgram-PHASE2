#include<stdio.h>
#include<stdlib.h>
void main()
{
int i,runs=0,n;
char *a;
scanf("%d",&n);
a=(char*)malloc(n*sizeof(char));
for(i=0;i<n;i++)
{
scanf(" %c",a+i);
if(*(a+i)=='d'||*(a+i)=='n')
{
n++;
a=(char*)realloc(a,n*sizeof(char));
}
}
for(i=0;i<n;i++)
{
if(*(a+i)=='w')
*(a+i)='0';
if(*(a+i)=='d'||*(a+i)=='n')
*(a+i)='1';
runs=runs+*(a+i)-48;
}
printf("Total runs:%d",runs);
for(i=0;i<4;i++)
{
if((*(a+i)==*(a+i+1))&&(*(a+1)==*(a+i+1+1)))
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
