#include <stdio.h>
void main()
{
	int a=1,*p1;
	p1 = &a;
	float b=1,*p2;
	p2= &b;
	double c=1,*p3;
	p3 = &c;
	char d=1,*p4;
	p4 = &d;
	printf("the adrees of int is %d",p1);
	printf("\nthe adress of float is %d",p2);
	printf("\nthe adress of double  is %d",p3);
    printf("\nthe adress of char is %d",p4);
    
    
    
    
    

}
