#include<stdio.h>
void mian()
{
	int a[3][3],i,j,pos=0,neg=0,zero=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter the arr[%d][%d] :",i,j);
			scanf("%d",a[i][j]);
			if(a[i][j]>0)
			{
				pos++;
			}
			else if(a[i][j]==0)
			{
				zero++;
			}
			else
			{
				neg++;
			}
		}
	}
	printf("%d %d %d",pos,neg,zero);
}
