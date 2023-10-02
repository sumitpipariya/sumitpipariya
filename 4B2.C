#include<stdio.h>
void main()
{
	float p,n,r,simpleinterest;
	printf("enter the value of p");
	scanf("%f",&p);
	printf("enter the value of n");
	scanf("%f",&n);
	printf("enter the value of h");
	scanf("%f",&r);
	simpleinterest=p*n*r/100;
	printf("simple interest=%f",simpleinterest);
	}