#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30]="Mech";
	char s2[30]="Mafia";
	strncpy(s1,s2,4);
	printf("String s1 is:%s",s1);
}
