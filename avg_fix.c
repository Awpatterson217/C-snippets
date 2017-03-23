#include <stdio.h>

// returns a simple average
int main(void)
{
	int i, numberOfNums = 0, total = 0, value;
	float average;
	printf( "How many numbers are to be read?" );
	scanf( "%d", &numberOfNums );
	for( i=0; i<numberOfNums; i++ )
	{
	    scanf( "%d", &value );
	    total += value; 
	    printf( "Read %d\n" ,value);
	}
	average = (float)total / (float)numberOfNums;
	printf( "You read %d values. Average = %f.\n", numberOfNums, average );
	return 0;
}
