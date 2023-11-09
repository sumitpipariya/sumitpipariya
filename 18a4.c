#include<stdio.h>
float max(float,float,float);
void main()
{
	float a,b,c,res=0;
	printf("Enter 3 values :");
	scanf("%f %f %f",&a,&b,&c);
	printf("Max value is :%f",max(a,b,c));
}
float max(float a,float b,float c)
{
	if(a<b)
	{
		if(b<c)
		{
			return c;
		}
		else
		{
			return b;
		}
	}
	else
	{
		if(a<c)
		{
			return c;
		}
		else
		{
			return a;
		}
	}
	
}
