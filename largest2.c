#include<stdio.h>
#include<limits.h>
void main()
{
	int i,n,max1=INT_MIN,max2=INT_MIN;
	printf("Enter a size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	if(a[i]>max1)
	{
	max2=max1;
	max1=a[i];
	}
	else if(a[i]>max2)
	{
	max2=a[i];
	}
	}
printf("%d\n%d",max1,max2);
}
