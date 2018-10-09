#include	<stdio.h>

int substraction ( int x , int y ) 
{

		int borrow = 0 ;

		while ( y ) {

				borrow = ~ x & y ;

				x = x ^ y ;

				y = borrow << 1 ;

		}
	return x ;
}

