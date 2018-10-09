#include	<stdio.h>

#include	<_val.h>

#define swap(num , spos, dpos ) ( ( (num >> spos ) & 1 ) ^ ( (num >> dpos ) & 1 ) ) && (num = ( num ^ ( 1 << dpos ) ^ ( 1 << spos ) ) )

int main ( void ) 
{
	int num = _val(NULL) ;

	zero_or_one ( num ) ;

	int spos = _val("dpos") ;

	int dpos = _val("spos") ;

	swap ( num ,dpos , spos ) ;

	zero_or_one ( num ) ;

	return 0 ;

}
