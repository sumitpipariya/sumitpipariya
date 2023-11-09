#include<stdio.h>
void main()
{
	int a,b,*c,*d,e;
	printf("Enter 2 value :");
	scanf("%d %d",&a,&b); 
	c=&a;
	d=&b;
	e=*c+*d;
	printf("Sum is %d",e);
}

