#include<stdio.h>
void main()
{
int n,i;
scanf("%d",&n);
int arr[n],sum=0;
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
for(i=0;i<n;i++)
sum=sum+arr[i];
printf("%d",sum);
}
