#include <stdio.h>

int     main(void)
{
    int a;
    int *p;

    a = 4;
    p = &a;

    printf("Value of a = %d\n", a);
    printf("Value of p = %d\n", *p);
    printf("Address of a = %p\n", &a);
    printf("Pointer p ampersand a = %p\n", p);
    printf("Address of p = %p\n", &p);
    return (0);
    
}