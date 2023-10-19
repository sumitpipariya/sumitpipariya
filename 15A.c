#include<stdio.h>
void main()
{
	int n,i,j;
	printf("Enter the element :");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the elememt 1 :",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("Enter the elememt 2 :",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
		a[i]=b[i];
	}
	for(i=0;i<n;i++)
	{
		printf("\n %d",a[i]);
	}
	
}
