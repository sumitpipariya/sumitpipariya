#include<stdio.h>
void main()
{
	int a=1,n,sum=0;
	printf("enter value of n");
	scanf("%d",&n);
	while(a<=n)
	{
		sum=sum+a;
		a=a+1;
	}
	printf("sum=%d",sum);
	}
