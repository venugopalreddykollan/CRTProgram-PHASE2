#include<stdio.h>
union FIRST
{
int x;
char y;
float z;
};
void main()
{
union FIRST f1;
f1.x=25;
f1.y='S';
f1.z=798.34;
printf("\n%d",f1.x);
printf("\n%c",f1.y);
printf("\n%f",f1.z);
printf("\n%ld",sizeof(f1));
}
