#include	<uma.h>

int main ( void ) 
{
		char *s1 = "dabba" ;

		char *s2 = "second_dabba" ;

		SWAPTR ( s1 , s2 ) ;
	
		puts(s1);

		puts(s2);

		return 0 ;

}
