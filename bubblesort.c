#include<stdio.h>
void main()
{
int i,j,k,a[100],n,temp,flag=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-(i+1);j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
flag=1;
}
}
if(flag==0)
{
printf("No need to sort");
break;
}
printf("\n Pass %d:",i+1);
for(k=0;k<n;k++)
printf("%d ",a[k]);
}
}
