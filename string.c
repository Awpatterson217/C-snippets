#include <stdio.h>

int main(VOID)
{
	char name[15];
	printf( "What is your name?\n" );
	scanf( "%s", name);
	printf( "Hello %s, my name is Computer.\n", name );
	return 0;
}
