#include <stdio.h>

int main()
{
	int x;
	printf( "Enter the value:\n" );
	scanf( "%d", &x);
	while( x <=10 )
	{
		printf( "%d is less than or equal to 10.\n", x );
		break;
	}
	while( x >= 11 )
	{
		printf( "%d is greater than or equal to 11.\n", x );
		break;
	}
	return 0;
}
