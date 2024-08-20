 #include<stdio.h>

main()
{
	int i,n;
	
	printf("Enter array size = ");
	scanf("%d",&n);
	
	int array[n];
	printf("Enter array elements = \n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&array[i]);
	}
			printf("Negative elements from an Array: ");
	
	for(int i=0;i<n;i++)
	{
		if(array[i]<0)
		{
			printf("%d",array[i]);
		}
	}
}
