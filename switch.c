#include <stdio.h>

// a la petite
int main(VOID)
{
	char a;
	printf( "What would you like for dinner?\n" );
	printf( "A) Chicken\n" );
	printf( "B) Steak\n" );
	printf( "C) Fish\n" );
	printf( "D) Pasta\n" );
	scanf( "%c", &a );
	switch (a)
	{
		case 'A':	
		printf( "You chose chicken, great choice!\n" );
		printf( "\n" );
		break;
	
		case 'B':
		printf( "You chose steak, great choice!\n" );
		printf( "\n" );
		break;
		
		case 'C':	
		printf( "You chose fish, great choice!\n" );
		printf( "\n" );
		break;
	
		case 'D':
		printf( "You chose pasta, great choice!\n" );
		printf( "\n" );
		break;
	
		default: 
		printf( "That was not a valid choice!\n" );
		printf( "\n" );
		break;
	}
	return 0;
}
