#include <stdio.h>
#include <stdlib.h>

int     main(void)
{
    int a; // goes on stack
    int *p;

    p = (int*)malloc(sizeof(int));
    *p = 10;
    printf("Before\n");
    printf("Value = %d\n", *p);
    printf("Address = %d\n", p);
    //free(p); 
    p = (int*)malloc(sizeof(int));
    *p = 20;
    printf("After\n");
    printf("Value = %d\n", *p);
    printf("Address = %d\n", p);

    return (0);
}