#include<stdio.h>
void main()
{
	float a,b;
	char ch;
	printf("enter a&b");
	scanf("%f %f",&a,&b);
	printf("enter operator");
	scanf(" %c",&ch);
	if(ch=='+')
	{
		printf("sum=%f",a+b);
	}
	else if(ch=='-')
	{
		printf("sub=%f",a-b);
	}
	else if(ch=='*')
	{
		printf("mul=%f",a*b);
	}
	else if(ch=='/')
			{
				if(b==0)
				{
					printf("invalid operator");
					}	
					else
					{
						printf("div=%f",a/b);
					}
			}
	}

