#include<stdio.h>
void main()
{
	int a,b,c;
	
	for(a=1;a<=5;a++)
	{
		for(c=1;c<=5-a;c++)
	{
		printf(" ");
	}
		for(b=1;b<=a;b++)
		{
			printf(" %d",b);
		}
		printf("\n");
	}
}
