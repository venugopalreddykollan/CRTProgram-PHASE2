#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char s[100];
	int alp,digit,splch,i;
	alp=digit=splch=i=0;
	printf("Input the string:");
	scanf("%s",s);
	while(s[i]!='\0')
	{
		if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
		{
		alp++;
		}
		else if(s[i]>='0'&&s[i]<='9')
		{
		digit++;
		}
		else
		{
		splch++;
		}
		i++;
	}
printf("Number of alphabets in the string is:%d\n",alp);
printf("Number of digits in the string is:%d\n",digit);
printf("Number of special characters in the string is:%d\n\n",splch);
}
