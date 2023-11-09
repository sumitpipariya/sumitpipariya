#include<stdio.h>
void main()
{
	int a[10],i,n,*c[10];
	printf("Enter the value of n :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter array element :");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		c[i]=&a[i];
		printf("\n%d",*c[i]);
	}
	
}
