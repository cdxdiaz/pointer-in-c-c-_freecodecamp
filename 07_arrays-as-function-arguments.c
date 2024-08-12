#include <stdio.h>

// "int* A" or "int A[]" ...it's the same...

int     SumOfElement(int* a, int size)
{
    int i;
    int sum;

    i = 0;
    sum = 0;
    while (i < size)
    {
        sum = sum + a[i]; // sum+=a[i]
        i++;
    }
    return (sum);
}

void    Double(int* a, int size)
{
    int i;

    i = 0;
    while (i < size)
    {
        a[i] = 2*a[i];
        i++;
    }
}

int     main(void)
{
    int a[] = {2, 4, 6, 8, 10};
    int size;
    int total;
    
    size = sizeof(a) / sizeof(a[0]);
    total = SumOfElement(a, size);
    printf("total before double = %d\n", total);
    
    Double(a, size);
    total = SumOfElement(a, size);
    printf("total after double = %d\n", total);
    return (0);
}