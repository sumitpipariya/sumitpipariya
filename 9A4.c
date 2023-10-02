#include<stdio.h>
void main()
{
	int i=1,j,fact;
	printf("enter value of i");
	scanf("%d",&j);
	while(i<=j){
		fact=fact*i;
		i++;
	}
	printf("%d",fact);
}
