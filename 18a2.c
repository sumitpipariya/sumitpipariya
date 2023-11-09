#include<stdio.h>
int max(int,int);
int min(int,int);
void main()
{
	int a,b,res1,res2;
	printf("Enter the value of a and b :");
	scanf("%d %d",&a,&b);
	res1 = max(a,b);
	res2 = min(a,b);
	
}
int min(int a,int b)
{
	if(a<b)
	{
		printf("B is max");
	}
	else
	{
		printf("\nA is max");
	}

}
int max(int a,int b)
{
	if(a<b)
	{
		printf("\nA is min");
	}
	else
	{
		printf("\nB is min");
	}

}
