#include<stdio.h>
void main()
{
	int a=1,n;
	printf("Enter value of n");
	scanf("%d",&n);
	printf("odd numbers\n");
	while(a<=n)
	{
		printf("%d\n",a);
		a=a+2; 
	}
}
