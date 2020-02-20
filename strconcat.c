#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30]="Mech";
	char s2[30]="Mafia";
	strncat(s1,s2,4);
	printf("String after concatinating is:%s",s1);
}
