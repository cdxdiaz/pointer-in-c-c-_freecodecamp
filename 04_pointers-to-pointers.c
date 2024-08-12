#include <stdio.h>

int main(void)
{
    int x;
    int *p;
    int **q;
    int ***r;
    
    x = 5;
    p = &x;
    *p = 6;
    q = &p;
    r = &q;

    printf("%d\n", *p);
    printf("%d\n", *q);
    printf("%d\n", *(*q));
    printf("%d\n", *(*r));
    printf("%d\n", *(*(*r)));

    ***r = 10;
    printf("x = %d\n", x);

    **q = *p + 2;
    printf("x = %d\n", x);

    return (0);
}