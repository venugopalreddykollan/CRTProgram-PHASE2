#include<stdio.h>
void main()
{
int a[6],i,runs=0;
for(i=0;i<6;i++)
scanf("%d",a+i);
for(i=0;i<6;i++)
{
runs=runs+*(a+i);
}
printf("Total score:%d",runs);
for(i=0;i<4;i++)
{
if((*(a+i)==*(a+i+1))&&(*(a+1)==*(a+i+2)))
{
if(*(a+i)==4)
printf("\n Hat-Trick Four");
if(*(a+i)==6)
printf("\n Hat-trick Six");
}
}
}
