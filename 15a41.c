#include<stdio.h>
void main()
{
	int a,count=0,c,i;
	printf("Enter the number :");
	scanf("%d",&a);
	int b[a];
	for(i=0;i<a;i++)
	{
		printf("Enter the element of :");
		scanf("%d",&b[i]);
	}
	printf("Find the element :");
	scanf("%d",&c);
	for(i=0;i<a;i++)
	{
		if(b[i]==c)
		{
			count=0;
		}
		else
		{
			count++;
		}
	}
	if(count==0)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}
