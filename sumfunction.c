#include	<stdio.h>

int sum ( int x , int y ) 
{

		int carry = 0 ;

		while ( y ) {

				carry = x & y ;

				x = x ^ y ;

				y = carry << 1 ;

		}

	return x ;
}

