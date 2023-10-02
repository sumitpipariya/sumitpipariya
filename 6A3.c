#include<stdio.h>
void main()
{
	char ch;
	printf("Enter the value");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
	{
		printf("Lowercase=%c",ch);
	}
	else if(ch>='A' && ch<='Z')
	{
		printf("Upercase=%c",ch);
	}
	else if(ch>='0' && ch<='9')
	{
		printf("digit=%c",ch);
	}
	else 
	{
		printf("special symbols");
	}
}
