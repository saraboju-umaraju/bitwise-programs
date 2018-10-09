#include	<stdio.h>

#include	<_val.h>

int main ( void ) 
{
	int x = _val(NULL);

	int pos = _val( "position" ) ;

	if ( ( x >> pos ) & 1 ) puts("yeah! bit"); else puts("well! zero");
	
	}

