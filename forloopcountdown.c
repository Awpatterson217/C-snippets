#include <stdio.h>

// Simple countdown 
int main()
{
	int x;
	int y;
	printf( "Pick a number to countdown from:\n" );
	scanf( "%d", &x );

	for ( x; x>=0; x-- )
	{
	printf( "%d\n", x );
	}
	return 0;
}
