#include <stdio.h>

// *(a + i) is same as  a[i]
//  (a + i) is same as &a[i]

int     main(void)
{
    int a[2][3];
    int i;
    int j;
    int (*p)[3]=a;

    i = 0;
    while (i < 2)
    {
        j = 0;
        while (j < 3)
        {
            a[i][j] = i + j + 1;
            printf("a[%d][%d] = %d\n", i, j, a[i][j]);
            j++;
        }
        i++;
    }
// for 2-D array
// B[i][j] = *(b[i] + j)
//         = *(*(b + i) + j)
    printf("p = %d or &p[0] = %d\n", p, &p[0]);
    printf("*p = %d or p[0] = %d or &p[0][0] = %d\n", *p, p[0], &p[0][0]);
    printf("p + 1 = %d or &p[1] = %d\n", p + 1, &p[1]);
    printf("*(p + 1) = %d or p[1] = %d or &p[1][0] = %d\n", *(p + 1), p[1], &p[1][0]);
    printf("*(p + 1) + 2 = %d or p[1] + 2 = %d or &p[1][2] = %d\n", *(p + 1) + 2, p[1] + 2, &p[1][2]);
    printf("*(p) + 1 = %d or p[0] + 1 = %d or &p[0][1] = %d\n", *(p) + 1, p[0] + 1, &p[0][1]);
    printf("%d\n", *(*p)+2);
    return (0);
}