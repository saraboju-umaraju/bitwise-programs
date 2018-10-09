#include	<stdio.h>

#include	<_val.h>

#include	<stdlib.h>

int main ( void ) 
{
	char buf[100] = "" ;

	int bit_pos = 0 ;

	puts("enter the string to deal with");

	if ( NULL == fgets ( buf , 99 , stdin ) ) {

		printf("reading error\n");

		exit ( EXIT_FAILURE ) ;

	}

	REM_NEWLINE ( buf ) ;

	while ( ONE ) {
	
	printf("enter number below %d\n", strlen(buf)*8);

	bit_pos = _val (NULL) ;

	if ( bit_pos > strlen(buf)*8 ) {

		puts("bad user request");

		continue ;

	}else break ;

	}

	bit_pos -= 8 ;

	*(buf + ( bit_pos / 8 ) ) ^= ( 1 << ( bit_pos % 8 ) ) ;

	puts(buf);

}

