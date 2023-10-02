#include<Stdio.h>
void main()
{
	char A;
	printf("enter char A");
	scanf("%c",&A);
	if(A=='a'||A=='e'||A=='i'||A=='o'||A=='u'||A=='A'||A=='E'||A=='I'||A=='O'||A=='U')
	{
		printf("%c is vowel",A);
	}
	else
	{
		printf("%c is constant",A);
	}
}
