#include<stdio.h>
void main()
{
	int a,b,c=0;
	printf("Enter the number :");
	scanf("%d",&a);
	while(a!=0)
	{
		b=a%10;
		a=a/10;
		c++;
	
	}
	printf("Digit is = %d",c);
}
