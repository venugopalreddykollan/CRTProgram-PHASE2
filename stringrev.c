#include<stdio.h>
void main()
{
	char s[100],t;
	int i,j,n;
	gets(s);
	for(n=0;s[n]!='\0';n++);
	for(i=0;j=n-1;i<j;i++,j--)
	{
		t=s[i];
		s[i]=t;
		s[j]=t;
	}
	puts(s);
}

