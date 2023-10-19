#include <stdio.h>
void main()
{
	char a[100];
    int i,j=0;
	printf("enter string a: ");
	gets(a);
	printf("%s\n",a);
	for(i=0;a[i]!='\0';i++)
	{
		j++;
	}
	printf("string length = %d",j);
	
}
