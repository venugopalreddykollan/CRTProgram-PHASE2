#include<stdio.h>
void main()
{
int i,j,m,n;
scanf("%d%d",&m,&n);
int arr[m][n];
for(i=0;i<m;i++)
    for(j=0;j<n;j++)
      scanf("%d",&arr[i][j]);
for(i=0;i<m;i++)
{
      for(j=0;j<n;j++)
        {
          if(i!=0 && i!=m-1 && j!=0 && j!=n-1)
          {
          printf("%d",arr[i][j]);
          }
	
        }
printf("\n");
}
}
