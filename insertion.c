#include<stdio.h>
void main()
{
int i,j,k,a[20],n,temp;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
for(i=0;i<n;i++)
{
for(j=i;j>0;j--)
{
if(a[j]<a[j-1])
{
temp=a[j];
a[j]=a[j-1];
a[j-1]=temp;
}
else
break;
}
printf("\n After Pass %d:",i);
for(k=0;k<n;k++)
printf("%d ",a[k]);
}
}
