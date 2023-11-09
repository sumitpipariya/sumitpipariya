#include<stdio.h>
int intrest(int,int,int);
void main()
{
	int pri,roi,time;
	float res=0;
	printf("Enter the principal :");
	printf("\nEnter the rate of intrest :");
	printf("\nEnter the time :");
	scanf("%d %d %d",&pri,&roi,&time);
	intrest(pri,roi,time);
	res= intrest(pri,roi,time);
	printf("Simple intrest is :%f",res/100);

}
int intrest(int a,int b,int c)
{
	int intrest;
	intrest = a*b*c;
	return intrest;
}

