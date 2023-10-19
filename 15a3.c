#include<stdio.h>
void main()
{
	int n,i,j,count=0;
	printf("Enter the element :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the elememt [%d] :",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%3==0)
		{
			count++;
		}
	}
	printf("Divisible by 3 is %d",count);
}
