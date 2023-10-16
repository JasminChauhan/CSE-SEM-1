#include <stdio.h>
void main()
{
	int n,i,ce=0,co=0,arr[n];
	printf("enter the numbers in array elements: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter elemets in arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	for(i=n;i>=1;i--)
	if(arr[i]%2==0)
	{
		ce++;
	}
	else 
	{
	    co++;
	}
	printf("even = %d\n",ce);
	printf("odd = %d",co);
}
