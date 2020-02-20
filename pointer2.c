#include<stdio.h>
#include<limits.h>
void main()
{
	int n,i,max1=INT_MIN,max2=INT_MIN;
	printf("Enter size of an array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
	scanf("%d",a+i);
	}
	for(i=1;i<n;i++)
	{
	if(*(a+i)>max1)
	{
	max2=max1;
	max1=*(a+i);
	}
	else if(*(a+i)>max2)
	{
	max2=*(a+i);
	}
	}
printf("%d %d",max1,max2);
}		
