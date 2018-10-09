#include <stdio.h>
#include <stdint.h> // For uintptr_t - One of the integer types capable of
                    // holding object pointers,
 
int main(void)
{
    const char *s1 = "Hello!";
    const char *s2 = "Hi!";
 
    printf("Before:\n");
    printf("s1 : %s\n", s1);
    printf("s2 : %s\n", s2);
    
    //
    // (uintptr_t)s1 ^= (uintptr_t)s2 ^= (uintptr_t)s1 ^= (uintptr_t)s2;
    //
    // The above is flagged with below warnings. So, we shouldn't be doing
    // this way for the goodness sake.
    //
    // [Warning] operation on `a' may be undefined <-- Coz of the absence of a
    //                                                 sequence point.
    // [Warning] use of cast expressions as lvalues is deprecated <-- For
    //                                              good reasons of consistency
    //                                              in accessing the original
    //                                              value of an object which
    //                                              was casted. 
    //
    
    // Here is the corrected implementation.
    //
    // As bitwise operators only endorse integral operands(includes
    // char as well), we treat each pointer to be holding an integer.
    //
    
    s1 = (const char *)((uintptr_t)s1 ^ (uintptr_t)s2),
    s2 = (const char *)((uintptr_t)s2 ^ (uintptr_t)s1),
    s1 = (const char *)((uintptr_t)s1 ^ (uintptr_t)s2);
    
    printf("After:\n");
    printf("s1 : %s\n", s1);
    printf("s2 : %s\n", s2);
 
    return 0;
}
