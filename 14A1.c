#include <stdio.h>
void main()
{
	int n,i,j,arr[n];
	printf("enter the numbers in array elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter elemets in arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	
	printf("\n normal order\t");
	for(i=0;i<n;i++)
	{    
		printf( "%d\t",arr[i]);
	}
	printf("\n reverse order\t");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\t",arr[i]);
	}

	 

}
