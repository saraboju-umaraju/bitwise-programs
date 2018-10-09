#include	<_val.h>

#include	<stdio.h>

int main ( void )
{
	int x = _val ( NULL ) ;

	zero_or_one ( x ) ;

	printf ( "%d\n",  x ^ ( x -1 ) ) ;
	
	zero_or_one ( x ^ ( x - 1 )  ) ;

}
