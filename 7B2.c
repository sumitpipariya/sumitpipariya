#include<stdio.h>
void main()
{
char c;
	printf("enter the char");
	scanf(" %c",&c);
	((c>='a' && c<='a')||(c>='A' && c<='Z')?(printf("%c is alphabet",c)):(printf("%c is not alphabet",c)));
}
