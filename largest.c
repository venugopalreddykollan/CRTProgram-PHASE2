#include<stdio.h>
void main()
{
	int i,n,max;
	printf("Enter a size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=1;i<n;i++)
	{
	if(a[i]>max)
	max=a[i];
	}
	printf("%d",max);
}
