#include<stdio.h>

main()
{
	int a,b,c,d;
	
	printf("enter value of a");
	scanf("%d",&a);
	printf("enter value of b");
	scanf("%d",&b);
	printf("enter value of c");
	scanf("%d",&c);
	printf("enter value of d");
	scanf("%d",&d);
	
	if(a>b)
	{
		if(a>c)
		{
			if(a>d)
			{
				printf("max value is A");
			}
			else
			{
				printf("max value is D");
			}
		}
		else
		{
			if(a>c)
			{
				printf("max value is A");
			}
			else
			{
				printf("max value is C");
			}
		}
	}
	else
	{
		if(b>c)
		{
			if(b>d)
			{
				printf("max value is B");
			}
			else
			{
				printf("max value is D");
			}
		}
		else
		{
			if(b>c)
			{
				printf("max value is B");
			}
			else
			{
				printf("max value is C");
			}
		}
	
		
	}
	  

}
