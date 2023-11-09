#include<stdio.h>
int fact(int);
void main()
{
	int a,res;
	printf("Enter the number :");
	scanf("%d",&a);
	res=fact(a);
	printf("%d",res);
}
int fact(int a)
{
	int b=1;
	if(a>0)
	{
		return a*fact(a-1);	
	}	
	else
	{
		return 1;
	}
}

