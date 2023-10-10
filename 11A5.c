#include<stdio.h>
void main()
{
	int a,b,fact=1;
	printf("Enter the number :");
	scanf("%d",&a);
	if(a<0)
	{
		printf("Factorial is not possible ");
	}
	for(b=1;b<=a;b++)
	{
		fact=fact*b;
	}
	printf("Factorial is %d",fact);
}
