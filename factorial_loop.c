#include <stdio.h>

// returns factorial 10
int main(void) 
{
	int answer = 1;
	int i;
	for( i = 2; i <= 10; i++) {
		answer = answer * i;
	}
	printf( "Answer = %d\n", answer );
}
