#include	<stdio.h>

int main ( void ) 
{
	unsigned long b = 0x60fb48 ;

	unsigned long a = 0xc15dee00 ;

	printf ("%x\n" , ( a & 0xffff0000 ) | (b & 0x0000ffff )) ;

	return 0 ;

}
