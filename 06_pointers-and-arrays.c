#include <stdio.h>
int     main(void)
{
    int A[5] = {2, 4, 6, 7, 10};
    int i;
    int *p;

    p = A;
    i = 0;
    while (i < 5)
    {
    printf("Address\n");
    printf("&A[%d]    = %d\n",i , &A[i]);
    printf("A + %d    = %d\n",i , A+i);
    printf("P + %d    = %d\n",i, p + i);
    printf("Value\n");
    printf("A[%d]     = %d\n",i , A[i]);
    printf("*(A + %d) = %d\n",i , *(A+i));
    printf("*(P + %d) = %d\n",i, *(p + i));
    printf("\n");
    i++;
    }
    return (0);
}