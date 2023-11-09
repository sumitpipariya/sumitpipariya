#include<stdio.h>
struct employ
{
	char name[10];
	int salary;
	int age;
};
void main()
{
	struct employ e;
	int i,n;
	printf("Enter detail of n employ :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("Enter Employ name :");
	scanf("%s",e.name);
	printf("Enter Employ salary :");
	scanf("%d",&e.salary);
	printf("Enter the Employ age :");
	scanf("%d",&e.age);
	}
}
