#include<stdio.h>
void main()
{
int n;
scanf("%d",&n);
if(n==2||n==3||n==5||n==7)
printf("Prime number");
else if(n%2!=0&&n%3!=0&&n%5!=0&&n%7!=0)
printf("Prime number");
else
printf("NOT");
}
