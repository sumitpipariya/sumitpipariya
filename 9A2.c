#include<stdio.h>
void main(){
	int i=1,j,mul=0;
	printf("enter value of j");
	scanf("%d",&j);
	while(i<=10){
	mul=j*i;
	printf("%d*%d=%d\n",j,i,mul);
	i++;
}
}
