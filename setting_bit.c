#include	<_val.h>

#include	<stdio.h>

int main ( void ) 
{
	int num ;

	num = _val () ;

	int bit_to_set = _val();

	num = num | ( 1 << bit_to_set ) ;

	printf("set bit %d\n",num);

	num = num & ( ~ ( 1 << bit_to_set ) ) ;
	
	printf("reset bit %d\n",num);

}

	
