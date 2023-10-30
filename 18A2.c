#include <stdio.h>
void comp(int a,int b);
void main()
{
	int a,b;
	printf("enter two numbers: ");
	scanf("%d",&a);
	scanf("%d",&b);
	comp(a,b);
	
}
void comp(int a,int b)
{
	if(a>b)
	{
		printf("%d is maximum",a);
		printf("%d is minimum",b);
	}
	else 
	{
		printf("%d is maximum",b);
		printf("%d is minimum",a);
	}
}
