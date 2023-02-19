#include <stdio.h>

main()
{
	for(int i=1; i<11; i++)
	{
		printf("5*%i=%i\n",i,5*i);
	}
	
	int j=0;
	while(j!=7)
	{
		scanf("%i", &j);
		if(j>7)
		{
			printf("bolshe 7\n");
		}
		else
		{
			if(j<7)
			{
				printf("menshe 7\n");
			}
		}
		
		if(j>10)
		{
			printf("bolshe 10\n");
		}
		else
		{
			if(j<10)
			{
				printf("menshe 10\n");
			}
		}
		
		if(j%2==0)
		{
			printf("delitsa na 2\n");
		}
		else
		{
			printf("ne delitsa na 2\n");
		}
		
		if(j%3==0)
		{
			printf("delitsa na 3\n");
		}
		else
		{
			printf("ne delitsa na 3\n");
		}
	}
}
