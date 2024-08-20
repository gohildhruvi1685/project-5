
#include<stdio.h>

main()
{
	int i,j,r,c;
	
	printf("Enter the array's row & column size = ");
	scanf("%d",&r);
	c=r;
	
	int a[r][c],t[c][r];
	
	printf("Enter array's elements = \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			t[j][i]=a[i][j];
		}
	}
	printf("The transpose matrix of an array = \n");
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d ",t[i][j]);
		}
		printf("\n");
	}
}