#include	<stdio.h>

#include	<_val.h>

int main ( void ) 
{

	int x = _val(NULL) ;

	int i = 31 ;
	
	int j = 0 ;

	zero_or_one ( x ) ;

	while ( i > j ) {

	if ( ( ( x >> i ) & 1 ) != ( ( x >> j ) & 1 ) ) { 

		x = x ^ (1 << i ) ;

		x = x ^ ( 1 << j ) ;

	}

	i = ~( -i )  ;
	
	j =-( ~j )  ;

	}
	
	zero_or_one ( x ) ;

	printf("%u\n",x);

}
