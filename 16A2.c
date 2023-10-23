#include <stdio.h>
void main()
{
	int a[3][3],i,j,cp=0,cn=0,cz=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter elements of a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
    }
    	
		
		for(i=0;i<3;i++)
	   {
		for(j=0;j<3;j++)
		{
		    if(a[i][j]>0)
			{
			     cp++;	
			}
			else if(a[i][j]<0)
			{
				cn++;
			}
			else if(a[i][j]==0)
			{
				cz++;
			}
				
		}
      } 
            printf("positive number = %d\n",cp);
			printf("negative number = %d\n",cn);
			printf("zero number = %d",cz);	
}
