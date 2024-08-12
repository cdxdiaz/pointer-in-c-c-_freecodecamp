#include <stdio.h>

int     main(void)
{
    int a;
    int b;
    int *p;
    
    a = 10;
    p = &a;

    printf("Value of a = %d\n", a);
    printf("Address of a = %d\n", &a);

    b = 20;
/*  
    *p = 20;
    printf("Value of *p = %d\n", *p);
    printf("Address of *p = %d\n", p);

    p = &b;
    printf("Value of *p = %d\n", *p);
    printf("Address of *p = %d\n", p);
*/
    printf("Value of p + 1 = %d\n", *p + 1);
    printf("size of p = %d byte\n", sizeof(p));
    printf("Address of p + 1 = %d\n", p + 1);

    return (0);
}