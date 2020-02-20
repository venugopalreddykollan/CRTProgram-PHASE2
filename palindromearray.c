#include<stdio.h>
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
int n,i,count=0;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{ 
if(palindrome(arr[i]))
count++;
}
printf("No of palindromes are:%d",count);
}
