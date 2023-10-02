#include<stdio.h>
#include<math.h>
void main()
	{
	float a,b,c,d,i;
	float root_1,root_2;
	printf("enter all value ");
	scanf("%f" "%f" "%f",&a,&b,&c);
	d=(b*b)-(4*a*c);
	i=sqrt(-1);
	if(d>0)
	{
		root_1=(-b+sqrt(d))/2*a;
		root_2=(-b-sqrt(d))/2*a;
		printf("root_1=%f",root_1);
		printf("root_2=%f",root_2);
	}
	else if(d==0)
	{
		root_1=(-b/2*a);
		printf("root_1=%f",root_1);
		}
	else if(d<0)
	{
		float realpart=-b/(2*a);
		float imgpart=sqrt(-d)/(2*a);
		printf("root 1=%2f+i%2f,root 2=%2f-i*%2f",realpart,imgpart,realpart,imgpart);
	}
}
