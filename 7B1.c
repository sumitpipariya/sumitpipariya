#include<stdio.h>
void main()
{
	int a,b,c,ans,max;
	printf("enter value of a b&c");
	scanf("%d %d %d",&a,&b,&c);
	max=a>b?a:b;
	switch(max){
	default:
		ans=max*c;
		printf("%d",ans);
	}
}
