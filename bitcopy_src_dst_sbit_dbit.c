#include	<stdio.h>

#include	<_val.h>

int main  ( void ) 
{
	int s = _val("src num") ;

	int d = _val ("dst num") ;
	
	int sb = _val("src bit") ;

	int db = _val("dst bit") ;

	if ( sb-db ) {

	s = s & ( ( (unsigned)(-ONE) )>>(BITS_32 - (db - sb) ) ) ;
	zero_or_one ( s ) ;

	s = s << sb ;	

	d = d | ( s ) ;
	}
	
	zero_or_one ( d ) ;

}

	
