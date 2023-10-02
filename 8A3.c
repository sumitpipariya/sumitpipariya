#include<stdio.h>
void main()
{
	int a,b;
	printf("enter value of a&b");
	scanf("%d %d",&a,&b);
	a=a+1;
	while(a<b){
		if(a%2==0){
			printf("%d\n",a);
		}
	a+=1;
	}
}
	

