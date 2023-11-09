#include<stdio.h>
int fact(int);
void main()
{
	int a,res=1;
	printf("Enter the number :");
	scanf("%d",&a);
	res=fact(a);
	printf("%d",res);
}
int fact(int a)
{
	int i,b=1;
	for(i=1;i<=a;i++)
	{
		b=b*i;
	}
	return b;
}

