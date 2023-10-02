#include<stdio.h>
void main()
{
	int a,b;
	char c;
	printf("enter value of a&b");
	scanf("%d %d",&a,&b);
	printf("enter your choice : '+'\t '-'\t '*'\t '/'\t");
	scanf(" %c",&c);
	switch(c)
	{
	case '+':
		printf("Addition=%d",a+b);
		break;
	case '-':
		printf("Substraction=%d",a-b);
		break;
	case '*':
		printf("Multiplication=%d",a*b);
		break;
	case '/':
		if(b!=0){
		printf("Div=%d",a/b);
		}
		else{
			printf("invalide value");
		}
		break;	
	default:
		printf("plese enter valide operation");
	}
}
