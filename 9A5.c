#include<stdio.h>
void main(){
	int n,fact,i=1;
	printf("enter value of n");
	scanf("%d",&n);
	while(i<=n){
		if(n%i==0)
		{
			printf("\n%d",i);
		}
		i++;
		
	}
}
