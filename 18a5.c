#include<stdio.h>
void swap(int *,int *);
void main()
{
	int a = 100,b=200;
	printf("Before swap value is :%d %d",a,b);
	swap(&a,&b);
}
void swap(int *c,int *d)
{
	int temp;
	temp=*c;
	*c=*d;
	*d=temp;
	printf("\nAfter swap value is : %d %d",*c,*d);
}

