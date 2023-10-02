#include<stdio.h>
void main()
{
	int a,b;
	printf("enter value of a");
	scanf("%d",&a);
	printf("enter value of b");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swap value\n");
	printf("a=%d\n",a);
	printf("b=%d",b);	
}
