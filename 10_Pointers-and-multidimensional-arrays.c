#include <stdio.h>

void    Func1(int *x) //passing 1-D array
{}

void    Func2(int (*x)[3]) // or "x[][3]"" passing 2-D arrays of integers
{}

void    Func3(int (*x)[3][4]) // or "x[][3][4]"" passing 3-D arrays of integers
{}

int     main(void)
{
    int a[2] = {1, 2};
    int b[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int c[2][3][4] = {{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}}, \
                    {{13, 14, 15, 16}, {17, 18, 19, 20,}, {21, 22, 23, 24}}};


    Func1(a); // return int *
    Func2(b); // return int (*)[3]
    Func3(c); // return int (*)[3][4]

    return (0);
}