#include<stdio.h>
void main()
{
	int a,b,c;
	char d=65;
	
	for(a=1;a<=5;a++)
	{
		for(c=1;c<=5-a;c++)
	{
		printf(" ");
	}
		for(b=1;b<=a;b++)
		{
			if(a%2==1)
			{
				printf(" %d",b);
			}
			else
			{
				printf(" %c",d);
				d++;
			}
		}
		printf("\n");
	}
}
