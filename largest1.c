#include<stdio.h>
#include<limits.h>
void main()
{
	int i,n,max=INT_MIN;
	printf("Enter a size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	if(a[i]>max)
	max=a[i];
	}
	printf("%d",max);
}
