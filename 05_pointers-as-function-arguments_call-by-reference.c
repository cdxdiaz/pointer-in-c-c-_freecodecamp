#include <stdio.h>

void    increment(int *p)
{
    *p = *p + 1;
}

int     main(void)
{
    int a;

    a = 10;
    increment(&a);
    printf("%d\n", a);
    return (0);
}