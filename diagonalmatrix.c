#include<stdio.h>
void main()
{
int i,j,m,esum=0,osum=0;
scanf("%d",&m);
int arr[m][m];
  for(i=0;i<m;i++)
    for(j=0;j<m;j++)
      scanf("%d",&arr[i][j]);
  for(i=0;i<m;i++)
    {
      for(j=0;j<m;j++)
        {
          if(arr[i][j]%2==0)
          {
            esum++;
          }
	   else
          {
            osum++;   
          }
        }
 printf("%d\t",esum);
    printf(",%d",osum);
printf("\n");
esum=0;
osum=0;
    }  
}
