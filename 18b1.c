//fibonacci series = 0 1 1 2 3 5 8 13 ....

#include<stdio.h>
void fibbio(int,int,int);
void main()
{
	int a=0,b=1,n;
	printf("Entre the value of n :");
	scanf("%d",&n);
	fibbio(a,b,n);

}
void fibbio(int a,int b,int n)
{
	int c,i;
	for(i=0;i<=n;i++)
	{
		printf("%d ",a);
		c=a+b;
		a=b;
		b=c;
	}		
}

