#include<stdio.h>
void main()
{
	int a[100][100],b[100][100],c[100][100],i,j,n;
	printf("Enter the value of n :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the element 1:");
			scanf("%d",&a[i][j]);
		}
		
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter the element 2:");
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}		
	}
	
	printf("Sum of the matrix is : \n");
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf(" %d",c[i][j]);
		}
		printf("\n");		
	}
}
