#include	<_val.h>

#include	<stdio.h>

int main ( void ) 
{
	int x = _val();

	int s = _val();

	int d = _val();

	zero_or_one ( x ) ;

	if ( ( x & ( 1 << d ) ) != ( x & ( 1 << s ) ) ) x = ( x ^ ( 1 << d ) ) ^ ( 1 << s ) ;

	zero_or_one ( x ) ;

	return 0 ;

}
	
