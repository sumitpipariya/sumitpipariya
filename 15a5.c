#include<stdio.h>
void main()
{
	int count=0,i;
	char a[100];
	printf("Enter the string :");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		count++;
	}
	printf("count = %d",count);
	
	
	
	
}
