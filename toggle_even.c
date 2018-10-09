#include	<stdio.h>

#include	<_val.h>

int main ( void )
{

	int num = _val();

	int usable = 0 ;

	zero_or_one ( num ) ;

	while ( usable < BITS_32 ) {

		num ^= ( ONE << usable ) ;

		usable += 2 ;
	
	}

	zero_or_one ( num ) ;

	return 0 ;

}
