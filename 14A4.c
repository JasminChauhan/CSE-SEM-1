#include <stdio.h>
void main()
{
	int n,i,arr[n],max,min,sum=0;
	float avg;
	printf("enter the numbers in array elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter elemets in arr[%d]= ",i);
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
		avg=(sum/n);
	}
	for(i=n;i>0;i--)
	{
		if(arr[n]<arr[i])
		{
			max=arr[i];
		}
	    if(arr[n]>arr[i])
		{
			min=arr[i];
		}
		
	}
	   printf("sum=%d\n max=%d\n min=%d\n avg=%f\n",sum,max,min,avg);
	
}
