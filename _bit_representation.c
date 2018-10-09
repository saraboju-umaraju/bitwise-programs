#include	<stdio.h>

void zero_or_one ( int num ) ;

void zero_or_one ( int num ) 
{
		int var = 63 ;

		while ( var >= 0 ) {
	
				if ( ! ( ( var + 1 ) % 8 ) && var!= 31 ) printf("    ");
				
				else if  ( ! ( ( var + 1 ) % 4 ) && var!=31) printf(" ");

				if ( ( (unsigned)num >> var ) & 1 ) { 

						printf("\e[5;32m1\e[5;0m"); 

				} else 

						printf("\e[5;33m0\e[5;0m"); 

				var-- ;

		}
						printf("\n"); 

}
