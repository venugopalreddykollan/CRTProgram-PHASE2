
#include<stdio.h>
void main()
{
int a[1000],key,n,i,f,l,mid;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&key);
f=0;
l=n-1;
while(f<=l)
{
mid=(f+l)/2;
if(a[mid]==key)
{
printf("search is successful at %d position",mid+1);
break;
}
else if(key<a[mid])
l=mid-1;
else
f=mid+1;
}
}
