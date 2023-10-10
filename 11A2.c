#include<stdio.h>
void main()
{
	int a,n,sum;
	printf("Enter n numbers :");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
	{
		sum=sum+a;
	}
	printf("Sum of 1 to n = %d",sum);
}
