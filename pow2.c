#include	<stdio.h>

int main ( void ) 
{
	int count = 0 ;

	int n = 0;//_val(NULL) ;

	scanf("%d",&n);
	
	int x = n ;

	if ( n ) {
	
	while ( (n = n & (n-1) ) ) count++ ;

	if ( count == 0 ) 
	
		printf("%4d is power of 2 \n" , x );

	}

	return 0 ;

}
