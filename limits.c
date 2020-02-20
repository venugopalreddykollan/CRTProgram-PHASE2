#include<stdio.h>
void main()
{
int n,i,min,max;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
scanf("%d",&a[i]);
min=a[0];
max=a[0];
for(i=0;i<n;i++)
{
if(max<a[i])
{
max=a[i];
}
if(min>a[i])
{
min=a[i];
}
}
printf("%d\n%d",min,max);
}
