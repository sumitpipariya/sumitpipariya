#include<stdio.h>
void main()
{
	int a,b,*c,*d,temp;
	printf("Enter 2 value :");
	scanf("%d %d",&a,&b); 
	c= &a;
	d= &b;
	temp=*c;
	*c=*d;
	*d=temp;
	printf("Swap no is :%d %d",*c,*d);
}

