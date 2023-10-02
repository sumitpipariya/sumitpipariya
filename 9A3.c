#include<stdio.h>
void main(){
	int x,y,i=1,j;
	printf("enter value of x");
	scanf("%d",&x);
	printf("enter value of y");
	scanf("%d",&y);
	while(i<=y){
		j=x*j;
		i++;
	}
	printf("%d",j);
}
