#include<stdio.h>
void main()
{
	int a,b=1,x,y;
	printf("Enter the value of x and y :");
	scanf("%d %d",&x,&y);
	for(a=1;a<=y;a++)
	{
		b=b*x;
	}
	printf("ans = %d",b);
	
}
