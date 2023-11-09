#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],sum[100][100],n,i,j;
	printf("Enter the value of n :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the element :");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the element :");
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" %d",b[i][j]);
		}
		printf("\n");
	}
	
	printf("Matrix sum is :\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf("%d",sum[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" %d",sum[i][j]);
		}
		printf("\n");
	}
}
	
	
