#include<stdio.h>
void main()
{
int n,min,i,j,k,a[100],temp;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<(n/2)-1;i++)
{
min=i;
for(j=i+1;j<n/2;j++)
{
if(a[j]<a[min])
min=j;
}
temp=a[min];
a[min]=a[i];
a[i]=temp;
}
for(i=0;i<(n/2)-1;i++)
{
min=i;
for(j=i+1;j<n/2;j++)
{
if(a[j]>a[min])
min=j;
}
temp=a[min];
a[min]=a[i];
a[i]=temp;
}
for(k=0;k<n;k++)
printf("%d ",a[k]);
}

