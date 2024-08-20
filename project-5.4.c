#include<stdio.h>

main()
{
	int r,c,i,j,row,col;
	
	printf("Enter the array's row size = ");
	scanf("%d",&r);
	
	printf("Enter the array's column size = ");
	scanf("%d",&c);
	
	int array[r][c];
	
	printf("Enter the elements of the array: \n" );
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	
	printf("Enter row number 0 to %d: ",r-1);
	scanf("%d",&row);
	
	int rs=0;
	printf("Elements of row %d: ",row);
	for(int j=0;j<c;j++)
	{
	printf("%d",array[row][j]);
	rs=rs+array[row][j];
	}
	printf("\nThe sum of row %d: %d\n",row,rs);
	
	printf("Enter row number 0 to %d: ",c-1);
	scanf("%d",&col);
	
	int cs=0;
	printf("Elements of column %d: ",col);
	for(int j=0;j<r;j++)
	{
	printf("%d",array[i][col]);
	cs=cs+array[i][col];
	}
	printf("\nThe sum of column %d: %d\n",col,cs);
}