#include <stdio.h>
void swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
    printf("m = %d and n = %d", *a, *b);
}
int sum(int a, int b)
{
    int sum = 0;
    
	sum = a + b;
    
    return sum;
}
int main(void)
{
    int m = 12;
    
	int n = 42;
	
    printf("m = %d, n = %d", m, n), 
	
	printf("%c", (char)32), 
	
	printf("Swapping... "), 
	
	swap(&m, &n), 

	printf("\n"),
	
    printf("Sum of the elements is:%d", sum(m, n)), 

	printf("\n");
    
	return 0 ;
}
