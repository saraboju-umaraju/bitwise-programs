#include	<uma.h>

#include	<_val.h>

int main ( void )
{
	int count = 0 ;
	
	unsigned int num = _val("number") ;

	num = num | -num ;

	num = -num ;

	while ( num >>= 1 ) count++ ;

	printf("val is %d\n",32 - count);

}
