#include<stdio.h>
void main()
{
	float unit,total_bill,bill;
	printf("enter unit");
	scanf("%f",&unit);
	if(unit<=50)
	{
		bill=unit*0.5;
	}
	else if(unit<=150)
	{
		bill=(50*0.5)+(unit-50)*75;
	}
	else if(unit<=250)
	{
		bill=(50*0.5)+(100*0.75)+(unit-150)*1.20;
	}
	else if(unit>250)
	{
	bill=(50*0.5)+(100*0.75)+(150*1.20)+(unit-250)*1.50;	
	}
	total_bill=(bill+bill*0.20);
	printf("total bill=%.2f",total_bill);
}

