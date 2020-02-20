#include<stdio.h>
#include<stdlib.h>
void main()
{
int *a,i,n1,n2;
printf("Enter size of array:");
scanf("%d",&n1);
a=(int*)malloc(n1*sizeof(int));
printf("Addresses of previously allocated memory:");
for(i=0;i<n1;i++)
scanf("%u\n",a+i);


printf("Enter new size of array:");
scanf("%d",&n2);
a=realloc(a,n2*sizeof(int));

printf("Addresses of newly allocated memory:");
for(i=0;i<n2;i++)
{
printf("%u\n",a+i);
}
}

