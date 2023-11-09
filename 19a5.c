#include<stdio.h>
void main()
{
	char a[10],b;
	int i;
	printf("Enter the string :");
	scanf("%s",&a);
	printf("Replace a charter :");
	scanf(" %c",&b);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==b)
		{
			printf("Yes");
		}
	}
}
