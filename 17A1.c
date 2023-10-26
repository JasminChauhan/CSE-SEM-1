#include <stdio.h>
void main()
{
	int *a,b;
    printf("enter the value: ");
	scanf("%d",&b);
	printf("the value is %d",b);
	b=&a;
	printf("\nthe adress is %d",&a);
	
	
}
