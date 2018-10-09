#include <stdio.h>

int main (int argc, char *argv[])
{
	int n = argc;
	int c;
	while ( n ) {
		n&=(n-1);
		c++;
	}
	printf ("%d", c);
	return 0;
}

