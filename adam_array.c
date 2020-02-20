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
int palindrome(int n)
{
int r,s,sum=0;
s=n;
while(n>0)
{
r=n%10;
sum=sum*10+r;
n=n/10;
}
if(sum==s)
return 1;
else
return 0;
}

 
void main()
{
int q,i,pali=0,prim=0;
scanf("%d",&q);
int arr[q];
for(i=0;i<q;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<q;i++)
{ 
if(palindrome(arr[i]))
pali++;
if(prime(arr[i]))
prim++;
}
printf("No of palindrome and primes are:%d \n %d",pali,prim);
}
