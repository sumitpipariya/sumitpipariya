#include<stdio.h>
void main()
{
	int a,b,c,d,sum;
	printf("Enter the number :");
	scanf("%d",&a);
	b=a%10;
	printf(" last digit is %d",b);
	c=a;
	while(a!=0)
	{
		c=a%10;
		a=a/10;
//		c++;
	}
	printf("\n First digit is %d",c);
	sum=b+c;
	printf("\n Sum is = %d",sum);
}
