#include<stdio.h>

main()
{
	int a,b,c,d,e;
	
	printf("enter value of a");
	scanf("%d",&a);
	printf("enter value of b");
	scanf("%d",&b);
	printf("enter value of c");
	scanf("%d",&c);
	printf("enter value of d");
	scanf("%d",&d);
	printf("enter value of e");
	scanf("%d",&e);
	
	
	if(a<b)//first if main if 
	{
		if(a<c)// 2nd if 
		{
		    if(a<d)//3rd if
		   	{
		   		if(a<e)
		   		{
		   		 printf("min value is A");	
			    }
			    else
				{
				 printf("min value is E");	
				}
			
		    }
		    	
			else//3rd else
			{
				if(a<d)
				{
					printf("min value is A");
				}
				else
				{
					printf("min value is D");
				}
				
			}
		}
		else//2nd else
		{
		   if(a<c)
		   {
		   	printf("min value is A");
		   }	
		   else
		   {
		   	printf("min value is C");
		   }
			
		}
	}
	else//first else 
	{
		if(b<c)//1 if 
		{
			if(b<d)	//2 if
			{
				if(b<e) //3 if
				{
					printf("min value is B");
				}
				else //3 else
				{
					printf("min value is E");
				}
			}
			else//2 else
			{
				if(b<d)
				{
					printf("min value is B");
				}
				else
				{
					printf("min value is D");
				}
			}
		}
		else//1 else
		{
			if(b<c)
			{
				printf("min value is B");
			}
			else
			{
				printf("min value is C");
			}
		}
	}
}
