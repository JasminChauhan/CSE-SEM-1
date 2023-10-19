#include <stdio.h>
void main()
{
	int i,j,n,a[5],b=0;
	for(i=0;i<5;i++)
	{
		printf("enter elements of array a[%d]: ",i);
		scanf("%d",&a[i]);
    }   
	for(i=0;i<5;i++)
	{
		if(a[i]%3==0)
		{
			b++;
		}
    }   	
	    printf("numbers divisible by 3 = %d",b);
}
