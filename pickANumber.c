#include <stdio.h>

int main()
{
	int the_number;
	printf( "What number am I thinking of? \n" );
	scanf( "%d", &the_number);
	if	(the_number == 10)    
	{
		printf( "That's right. Great Job! \n" );
	}
	else if (the_number < 10)    
	{
		printf( "Nope, guess higher. \n" );
		scanf( "%d", &the_number);
		if	(the_number == 10)
		{
			printf( "Great Job! That was close... \n" );
		}
		else 
		{
			printf( "Lane, you suck... \n" );
		}
	}
	else if (the_number > 10)    /* Third IF */
	{
		printf( "Nope, guess lower. \n" );
		scanf( "%d", &the_number );
		if      (the_number == 10)
		{
				printf( "Great Job! That was close... \n" );
		}
		else
		{
			printf( "Lane, you suck... \n" );
		}
	}
	return 0;
}


