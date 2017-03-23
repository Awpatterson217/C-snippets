#include <stdio.h>
#include <stdlib.h>

int i;

int main(void)
{
	puts ("Enter a single character:\n");
	char c = getchar();
	int count = 42;
	for (i = 0; i < count; i ++) 
    	{
		putchar(c);
	}
	
	puts ("\n");	
	puts ("Again:\n");
	return 0;
}
