#include<stdio.h>
void main()
{
	int a,b,c=1;
	
	for(a=1;a<=5;a++)
	{
		
		for(b=1;b<=a;b++)
		{
			printf(" %d",c);
			c++;
		}
		printf("\n");
	}
}
