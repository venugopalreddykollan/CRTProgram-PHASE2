#include <stdio.h>
int prime(int n)
{
    int count,i;
    count=0;
   for(i=1;i<=n;i++)
   {
   if(n%i==0)
   {
       count++;
   }
   }
   if (count==2)
   {
       printf("%d is a prime number",n);
   }
   else
   {
       printf("%d is not a prime number",n);
   }
}

void main()
{
    prime(10);
    
}