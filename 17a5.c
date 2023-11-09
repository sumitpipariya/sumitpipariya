#include<stdio.h>
void main()
{
	int a[100],n,*p,i;
	printf("Enter the element of array ...");
	printf("\nEnter the value of n : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	p=a;
	printf("Value of array to pointer is :");
	for(i=0;i<n;i++)
	{
		printf("\n %d",*p);
		p++;
	}
}
