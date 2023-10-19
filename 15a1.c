#include<stdio.h>
void main()
{
	int a,n,b,i,j;
	printf("Enter the element :");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the elememt [%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		a[i]=b[i];
	}
	for(i=0;i<n;i++)
	{
		printf("/n %d",a[i]);
	}
	
}
