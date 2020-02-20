#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30]="Mecb Mafia";
	char s2[30]="Mech Mafia";
	int i;
	if(strcmp(s1,s2)==0)
	{
		printf("s1 and s2 are same");
	}
	else
	{
		printf("s1 and s2 are not same");
	}
	i=strcmp(s1,s2);
	printf("%d",i);
}
