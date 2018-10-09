#include	<stdio.h>

int main ( void ) 
{

	int x = _val("enter");

	printf ("# %d #\n",x);

	return 0;

	int y = _val("enter");

	int borrow = 0 ;

	while ( y ) {

		borrow = ~ x & y ;

		x = x ^ y ;

		y = borrow << 1 ;

}

printf("result is %d\n", x);

}

