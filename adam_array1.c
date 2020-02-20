#include<stdio.h>
int adama(int n)
{
int r,s,sum=0,multip=0,revmultip=0;
s=n;
while(n>0)
{
r=n%10;
sum=sum*10+r;
n=n/10;
}
if(sum==s)
{
multip=s*s;
revmultip=sum*sum;
if(revmultip==multip)
return 1;
else
return 0;
}
}


void main()
{
int q,i,adam=0;
scanf("%d",&q);
int arr[q];
for(i=0;i<q;i++)
scanf("%d",&arr[i]);
for(i=0;i<q;i++)
{
if(adama(arr[i]))
{
adam++;
}
}
printf("%d",adam);
}
