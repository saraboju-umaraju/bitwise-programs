#include	<_val.h>

#include	<stdio.h>

int main ( void ) 
{

	int x = _val() ;

	int count = 0 ;

	x = -( x | -x ) ;

	while ( x >>= 1 ) count++ ;

	printf("count is %d\n",count);

	printf("%d bytes and %d nibbles are there\n" , ( (count+1)/8 ) + 1 , (( (count+1)/8 ) + 1 ) *2 ); 

}
