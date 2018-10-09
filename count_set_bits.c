#include	<stdio.h>

#include	<_val.h>

int main  ( void )
{
	unsigned int x = _val( NULL ) ;

	int count = 0 ;

/*	while ( x ) {

		x = x >> 1 ;

		if ( x & 1) count++ ;

	}*/
	
	while ( x ) {

	x = x & ~(-x) ;

	count++ ;
	
	}

	printf("set bits are %d\n", count);
	
	printf("reset bits are %d\n", (BITS_32 - count ));
	
	return 0 ;
}
