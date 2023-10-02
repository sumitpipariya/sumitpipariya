#include<stdio.h>
void main()
{
	int i=1,n,sum=0;
	printf("enter value of n");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		{
			sum=sum-i;
		}
		else{
			sum=sum+i;
		}
		i++;	
	}
	printf("sum of series=%d",sum);
}
