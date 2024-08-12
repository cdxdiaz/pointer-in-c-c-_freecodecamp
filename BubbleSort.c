#include <stdio.h>

void    BubbleSort(int *A, int n)
{
    int i;
    int j;
    int temp;

    i = 0;
    while (i < n)
    {
        j = 0;
        while (j < n - 1)
        {
            if (A[j] > A[j + 1])
            {   
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
}

int     main(void)
{
    int i;
    int n;
    int A[]= {1, 5, 3, 4, 6, 2};

    i = 0;
    n = 6;
    BubbleSort(A,n);
    while (i < n)
    {
        printf("%d\n", A[i]);
        i++;
    }
}