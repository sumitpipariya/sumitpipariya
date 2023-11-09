#include<stdio.h>
void main()
{
	int a[10],b[10],i,n,*c[10],*d[10];
	printf("Enter the value of n :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter first array element :");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("Enter second array element :");
		scanf("%d",&b[i]);
	}
	printf("After swapping the value is :\n");
	for(i=0;i<n;i++)
	{
		c[i]=a[i];
		a[i]=b[i];
		b[i]=c[i];
		printf("%d\n",a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d",b[i]);
	}
}
