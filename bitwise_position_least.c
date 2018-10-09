#include	<stdio.h>

#include	<_val.h>

clear_bit_position ( int original ) 
{	
		int count = 0 ;

		if ( original & 1 ) {

				return -( ~count ) ;

		}

		else if ( ! ( original & ~ ( -original ) ) ) 
		{

				while ( original >>= 1 ) count = -( ~count )  ; 

				return -( ~count ) ;

		}

		else { 

				original = original - ( original & ~ ( -original ) ) ;

				while ( original >>= 1 ) count = -( ~count )  ; 

				return -( ~count ) ;

		}

}
