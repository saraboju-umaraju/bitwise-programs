#include	<stdio.h>

#include	<_val.h>

int main ( void ) 
{

	int x = _val() ;

	int bits = _val () ;

	int dir = 1 ;

//	int usable = 0 ;

	zero_or_one ( x ) ;

//	usable = ( (unsigned) x ) << ( 32 - bits )  ; 
	
	x = ( ( (unsigned) x ) >> bits ) |  ( (unsigned) x ) << ( 32 - bits )  ;
	
//	x = x | usable ;

	zero_or_one ( x ) ;

	return 0 ;

}

	

	
