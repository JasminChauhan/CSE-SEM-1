#include <stdio.h>
void main()
{
	int i,j,n,a[5],cn=0;
	for(i=0;i<5;i++)
	{
		printf("enter elements of array a[%d]: ",i);
		scanf("%d",&a[i]);
    }   
	for(i=0;i<5;i++)
	{
		if(a[i]<0)
		{
			cn++;
		}
    }   	
	    printf("negative numbers = %d",cn);
}
