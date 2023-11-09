#include<stdio.h>
void arr(int[]);
void main()
{
	int a[10],n,i;
	printf("Enter the element :");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	arr(a);
}
void  arr(int a[])
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
}
