#include<stdio.h>
void main()
{
	int a[10][10],b[10][10],i,j,n;
	printf("Enter value of n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)       //1
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix element:\n");
	for(i=0;i<n;i++)                                //2
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n;i++)                                  //3
	{
		for(j=0;j<n;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	printf("Tranpose element:\n");
	for(i=0;i<n;i++)                                     //4
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
}
