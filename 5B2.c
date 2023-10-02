#include<stdio.h>
void main()
{
	int n;
	printf("enter the number");
	scanf("%d",&n);
	if(n&1)
	{
		printf("%d is odd",n);
	}
	else
	{
		printf("%d is even",n);
	}
}
