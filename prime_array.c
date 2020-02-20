#include<stdio.h>
int prime(int n)
{
int i,p=0;
for(i=1;i<=n;i++)
{
if(n%i==0)
p++;
}
if(p==2)
return 1;
else
return 0;
}


 
void main()
{
int q,i,count=0;
scanf("%d",&q);
int arr[q];
for(i=0;i<q;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<q;i++)
{ 
if(prime(arr[i]))
count++;
}
printf("No of primes are:%d",count);
}
