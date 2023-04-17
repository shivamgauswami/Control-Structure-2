#include<stdio.h>

main()
{
	int a,b,c;
	
	   printf("enter value of a");
	   scanf("%d",&a);
	   printf("enter value of b");
	   scanf("%d",&b);
	   printf("enter value of c");
	   scanf("%d",&c);
	  
	if (a<b)
	{
		if(a<c)
		{
			printf("minimum value is A");
			
		}
		else
		{
			printf("minimum value is C");
			
		}
    }
    else
    {
    	if(b<c)
    	{
    		printf("minimum value is B");
    		
		}
		else
		{
			printf("minimum value is C");
			
		}
	}
}
