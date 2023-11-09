#include<stdio.h>
int add(int,int);
void main()
{
	int a,b,sum=0,res=0;
	printf("Enter 2 value :\n");
	scanf("%d %d",&a,&b);
	res =add(a,b);
	printf("sum is :%d",res);
}
int add(int a,int b)
{
	int sum=a+b;
	return sum;
}
