#include <stdio.h>
struct Book
{
	char title[30];
	char author[30];
	char publication[30];
	int price;
};
void main()
{
    struct Book b1;
	int i;
	for(i=0;i<3;i++)
	{
	   printf("enter book title: ");
	   scanf("%s",b1.title);
	   printf("enter book author: ");
	   scanf("%s",b1.author);
	   printf("enter book publication: ");
	   scanf("%s",b1.publication);
	   printf("enter book price: ");
	   scanf("%d",&b1.price);	
	}
		for(i=0;i<3;i++)
	{
	   printf("book title: %s",b1.title);
	   
	   printf("\nbook author: %s",b1.author);
	  
	   printf("\nenter book publication: %s",b1.publication);
	   
	   printf("\nenter book price: %d",b1.price);
	   	
	}
}
