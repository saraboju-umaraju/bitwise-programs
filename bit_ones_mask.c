#include	<stdio.h>

#include	<_val.h>

int main ( void ) 
{
	int x = _val("how many ones mask you want") ;

	x = ( ((unsigned) ( -ONE )) >> BITS_32 - x ) ;
	
	zero_or_one ( x ) ;

}
