#include	<uma.h>

#include	<_val.h>

int main (void) 
{

		int x = _val();

		int y = _val() ;

		int _sum = 0 ;

		while ( y ) {

				if ( y & 01 )

				_sum = sum( _sum , x ) ;

				x<<=1;

				y>>=1;

		}

	printf("result is %d\n", _sum);

}
