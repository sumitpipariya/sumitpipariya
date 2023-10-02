#include<Stdio.h>
void main()
{
	float m1,m2,m3,m4,m5;
	printf("enter marks");
	scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
	float per=(m1+m2+m3+m4+m5)/5;
	if(per>70)
	{
		printf("Distinction=%f",per);
	}
	else if(per<=70 && per>=61)
	{
		printf("first class=%f",per);
	}
	else if(per<=60 && per>=46)
	{
		printf("second class=%f",per);
	}
	else if(per<=45 && per>=36)
	{
		printf("pass class=%f",per);
	}
	else if(per<35)
	{
		printf("fail=%f",per);
	}
	}
