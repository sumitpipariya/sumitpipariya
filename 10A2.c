#include<stdio.h>
void main()
{
	int a=1,sum=0,i=0;
	float avg=1;
	printf("Enter the number :");
	
	while(a!=0)
	{
		scanf("%d",&a);
		sum=a+sum;
		i++;
		

	}
	avg=sum/i;

	printf("Sum is %d",sum);
	printf("\nAverage is %f",avg);
}
