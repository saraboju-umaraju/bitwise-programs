#include	<stdio.h>

#include	<_val.h>

int main ( void ) {

	printf("xor of numbers is %d\n" ,myXOR ( _val() , _val() ) );

	return 0;

}

int myXOR(int x, int y)
{
   return (x | y) & (~x | ~y);
}
