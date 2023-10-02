#include<stdio.h>
void main()
{
	float a,b,c;
	printf("enter the first side");
	scanf("%f",&a);
	printf("enter the second side");
	scanf("%f",&b);
	printf("enter the third side");
	scanf("%f",&c);
	if(a==b && b==a)
	{
		printf("Tringle is Isosceles");
	}
	else if(a==b || b==c || a==c)
	{
		printf("Tringle is Euilateral");
	}
	else if((a*a)==(b*b)+(c*c) || (b*b)==(a*a)+(c*c) || (c*c)==(a*a)+(b*b))
	{
		printf("Tringle is right angled");
	}
	else 
	{
		printf("Tringle is Scalene");
	}
}
