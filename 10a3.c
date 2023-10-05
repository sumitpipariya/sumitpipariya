#include<stdio.h>
void main()
{
	int n,count=0,i=2;
	printf("Enter the number :");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
			count = count+1;
		}
		i++;
	}
	if(count==0)
	{
		printf("Prime number");
	}
	else
	{
		printf("Not Prime number");
	}
}
