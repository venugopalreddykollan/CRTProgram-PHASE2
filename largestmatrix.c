#include<stdio.h>
void main()
{
int i,j,m,n,temp;
scanf("%d%d",&m,&n);
int arr[m][n];
for(i=0;i<m;i++)
    for(j=0;j<n;j++)
      scanf("%d",&arr[i][j]);
for(i=0;i<m;i++)
{
      for(j=0;j<n;j++)
        printf("%d",arr[i][j]);
        printf("\n");
}

for(i=0;i<m;i++)
{
temp=arr[i][0];	
	    for(j=0;j<n;j++)
		{
		
		if(temp<arr[i][j])
		{
		temp=arr[i][j];
		}
		
		}
		printf("%d",temp);
}

}
	   
