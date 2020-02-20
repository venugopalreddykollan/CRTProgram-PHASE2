#include<stdio.h>
int palindrome(int n)
{
int r,s,sum=0;
s=n;
while(n>0)
{
r=n%10;
sum=(sum*10)+r;
n=n/10;
}
if(sum==s)
printf("palindrome");
else
printf("NOt a palindrome");
}
void main()
{
palindrome(121);
}
