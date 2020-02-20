#include<stdio.h>
struct SAMPLE
{
int x;
float y;
char z;
struct SAMPLE*p1;
};
void main()
{
struct SAMPLE s1;
struct SAMPLE s2={12,45.6,'D',NULL};
s1.x=85;
s1.y=7.2;
s1.z='J';
s1.p1=&s2;
printf("\n%d",s1.x);
printf("\n%f",s1.y);
printf("\n%c",s1.z);
printf("\n%d",(s1.p1)->x);
printf("\n%f",s1.p1->y);
printf("\n%c",s1.p1->z);
printf("\n%p",s1.p1->p1);
}
