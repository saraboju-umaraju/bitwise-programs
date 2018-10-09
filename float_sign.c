#include    <limits.h>                                                          
#include    <stdio.h>                                                          
#include    <math.h>                                                            
                                                                                
int main(void)                                                                  
{                                                                               
    float f = -3.12;                                                             
     
	#if 0                                                                           
    unsigned long x = (float) ((*((int *) &f))^(1<<31)) ;                       
  
	zero_or_one ( x ) ;
                                                                              
   printf ("%lf\n" , (float)x ) ;                     
   
	printf ("%f\n" ,  (float) ((*((int *) &f))^(1<<31))  ) ;                     
    printf ( "%f\n" , (float) ((*((int *) &f))^(1<<31)));  

	zero_or_one (  (float) ((*((int *) &f))^(1<<31)) ) ;                     

	#endif

	//int *p = &f ;

//	( *p^= ( 1 << 31 ) );

//	 printf ("%f\n" , (float) (*((int*)(&f))^ (1 << 31 )) ) ;                     
	 
	fprintf ( stdout , "%f\n" ,  ((int)f) ^ ( 1 << 63 ) ) ;                     

}                                                                               
                              
