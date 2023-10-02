#include<stdio.h>
void main()
{
	int n,i,oddcount=0,evencount=0;
	printf("enter value of n");
	while(n<=10)
	{
		scanf("%d",&i);
		if(i%2==0)
		{
			evencount+=1;
		}
		else
		{
			oddcount+=1;
		}
		n++;
	}
	printf("evencount=%d\n",evencount);
	printf("oddcount=%d",oddcount);
}
