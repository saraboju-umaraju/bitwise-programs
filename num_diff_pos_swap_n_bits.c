#include	<stdio.h>

int main ( void ) 
{
	unsigned long num = -1 ;

	int src = 4 ;

	int dst = 14 ;

	int bits = 5 ;

	int mask = 0 ;

	 ( num << ( 32 - dst  ) ) >> (  32 - bits   ) ;
	
	 ( num << ( 31 - src  ) ) >> (  32 - src - bits   ) ;
	
	
	//mask = ( ( num << ( 32 - dst  ) ) >> (  32 - 5   ) )  ;

	//printf("%u\n",mask);

	return 0 ;

}
