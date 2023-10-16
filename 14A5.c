#include <stdio.h>
void main()
{
	int h[5],w[5],i,n=5,a=0;
	for(i=0;i<n;i++)
	{
		printf("enter heights in h[%d]\t= ",i);
		scanf("%d",&h[i]);
		printf("enter weights in w[%d]\n= ",i);
		scanf("%d",&w[i]);
    }
       for(i=0;i<5;i++)
       {
       	if(h[i]>=170 && w[i]<=50)
       	{
       		a++;
        } 
       	   	printf("the person having height grater than 170 and weight less than 50 = %d",a);	
	
	   }
}
