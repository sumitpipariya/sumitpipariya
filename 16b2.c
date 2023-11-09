#include<stdio.h>
void main()
{
	int a[3][3],i,j,b=0,c=0,d=0;
	printf("Enter the matrix :\n");
	for(i=0;i<3;i++)      
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Matrix element:\n");
	for(i=0;i<3;i++)                                
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)      
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==0)
			{
				b++;
			}
			else if(a[i][j]>0)
			{
				c++;
			}
			else if(a[i][j]<0)
			{
				d++;
			}
		}
	}
	printf(" No.of 0 is : %d",b);
	printf("\n positive is : %d",c);
	printf("\n Negative is : %d",d);

}
















