#include	<stdio.h>

#include	<_val.h>

int main ( void ) 
{
	int a = _val() ;

	int b = _val();

	while ( b ^= a ^= b ^= a %= b);

	printf("val is %d\n", a);

}
