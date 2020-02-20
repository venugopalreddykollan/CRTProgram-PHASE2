#include<stdio.h>
#include<string.h>
int main()
{	
	for(i=0;i<4;i++)
	{
	for(j=i+1;j<5;j++)
	{
	if(strcmp(str[i],str[j])>0)
	{
	strcpy(temp,str[i]);
	strcpy(str[i],str[j]);
	strcpy(str[j],temp);
	}
	}
	printf("\nin ")
	
}
