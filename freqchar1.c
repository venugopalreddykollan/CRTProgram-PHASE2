#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000];
	int i,c[123]={0};
	printf("Enter a string:");
	scanf("%s",str);
	for(i=0;str[i]!='\0';++i)
	{
	c[str[i]]++;
	}
	for(i=0;i<123;i++)
	{
	if(c[i]>1)
	printf("\n %c-->%d",i,c[i]);
	}
}
