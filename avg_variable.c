#include <stdio.h>

// returns an average
int main(void)
{
	int i, numberOfNums = 0, total = 0, valsread,  value;
	float average;
	valsread = scanf( "%d", &value );
	while( valsread > 0 )
	{
		if (value < 0) 
		{
		    valsread = scanf( "%d", &value);
		    continue;
		}
	    numberOfNums ++;
	    total += value; 
	    printf( "Read %d\n" ,value);
	    valsread = scanf( "%d", &value );
	}
	average = (float)total / (float)numberOfNums;
	printf( "You read %d values. Average = %f.\n", numberOfNums, average );
	return 0;
}
