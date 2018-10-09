#include	<stdio.h>

#include	<_val.h>

int main ( void ) 
{
	int x ;
	
	int spos = _val ("src bit");
	
	int dpos = _val ("dest bit");

	x = ( ( (unsigned) -ONE ) >> ( BITS_32 - ( dpos - spos + 1  ) )  ) << spos ;

	zero_or_one ( x ) ;

	return 0 ;

}

	
