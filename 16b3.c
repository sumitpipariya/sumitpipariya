#include<stdio.h>
void main()
{
	int a[10][10],i,j,n,sum=0;
	printf("Enter value of n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)      
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix element:\n");
	for(i=0;i<n;i++)                                
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++)      
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				sum=sum+a[i][j];
			}
		}
	}
	printf("Diagolan matrie sum is :%d",sum);
}
