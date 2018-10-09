#include	<stdio.h>

int main ( void )
{

	int num = _val("number");

	int usable = 0 ;

	zero_or_one ( num ) ;

/*	while ( usable < BITS_32 ) 

		num ^= ( ONE << usable++ ) ;

	zero_or_one ( num ) ;*/

	num ^= ( ~ 0 ) ;
	
	zero_or_one ( num ) ;

	return 0 ;

}
