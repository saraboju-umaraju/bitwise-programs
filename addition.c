#include	<stdio.h>

#include	<stdlib.h>

#include	<_val.h>

int main ( void ) 
{

	int a = _val(); 
	
	int b = _val(); 

	int carry = ( a&b ) ;

	while ( b ) {

		carry = a & b ;

		printf("carry is %d\n",carry);

		a = a ^ b ;
		
		printf("sum xored is %d\n",a);

		b = carry << 1  ;

		printf("next b shifted %d\n",b);

	}

	printf("%d\n",a);

}
	/* now i gotta learn adders */

/*	INPUTS                 OUTPUTS

A             B             SUM      CARRY

0              0              0              0

0              1              1              0

1              0              1              0

1              1              0              1 

lets works for 10 and 5 

	x = 10 ;

	y = 5 ;

	printf("%d\n", x ^ y) ; // works very when ther is no carry 

	A             B             CIN         COUT    S

0              0              0              0              0

0              0              1              0              1

0              1              0              0              1

0              1              1              1              0

1              0              0              0              1

1              0              1              1              0

1              1              0              1              0

1              1              1              1              1  */


int Add(int x, int y)
{
    if (y == 0)
        return x;
    else
        return Add( x ^ y, (x & y) << 1);
}

/* Sum of two bits can be obtained by performing XOR (^) of the two bits. Carry bit can be obtained by performing AND (&) of two bits.
Above is simple Half Adder logic that can be used to add 2 single bits. We can extend this logic for integers. If x and y don’t have set bits at same position(s), then bitwise XOR (^) of x and y gives the sum of x and y. To incorporate common set bits also, bitwise AND (&) is used. Bitwise AND of x and y gives all carry bits. We calculate (x & y) << 1 and add it to x ^ y to get the required result.*/
