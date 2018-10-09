#include	<stdio.h>

#include	<stdlib.h>

int main ( void ) 
{

	int x = _val(NULL);

	int travel = 0 ;

	zero_or_one ( x ) ;

	while  ( travel < 32 ) {

			if ( ( ( ( unsigned ) x >> travel ) & 1 ) != ( ( ( unsigned ) x >> travel + 1 ) & 1 ) ) 

					x = x ^ ( 1 << travel ) ^ ( 1 << (travel + 1 ) );
					
				travel+=2 ;

		}
	
	zero_or_one ( x ) ;

}
