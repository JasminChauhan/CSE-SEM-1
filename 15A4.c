#include <stdio.h>
void main()
{
	int a[5],n,i;
	printf("enter number you want to search: ");
	scanf("%d",&n);
	for(i=0;i<5;i++)
	{
		printf("enter elements in array of a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]==n)
		{
			printf("number is found in a[%d]",a[n]);
		}
	}
}
