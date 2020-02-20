#include<stdio.h>
void main()
{
int a[1000],key,n,i,flag=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
printf("Position of element is :%d",i+1);
flag=1;
}
}
if(flag==0)
{
printf("Element not found");
}
}
