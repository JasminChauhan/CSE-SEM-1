#include <stdio.h>
void main()
{
	int n,i,cp=0,cn=0,arr[n];
	printf("enter the numbers in array elements: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("enter elemets in arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	for(i=n;i>=1;i--)
	if(arr[i]<0)
	{
		cn++;
	}
	else 
	{
	    cp++;
	}
	printf("positive = %d\n",cp);
	printf("negative = %d",cn);
}
