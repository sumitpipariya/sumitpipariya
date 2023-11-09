#include<stdio.h>
void main()
{
	int a[20],b[20]; 
	printf("Enter two string :");
	gets(a);
	gets(b);
	printf("String length is : %d",strlen(a));
	printf("\nString compare is : %d",strcmp(a,b));
	printf("\nString copy is :%s",strcpy(a,b));
	printf("\nString concatinate is :%s",strcat(a,b));
	printf("\nString revers is :%s",strrev(a));
	printf("\nString lower is :%s",strrev(a));
	printf("\nString upper is :%s",strupr(b));
}


