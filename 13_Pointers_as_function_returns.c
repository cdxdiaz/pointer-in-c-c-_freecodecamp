#include <stdio.h>
#include <stdlib.h>

int     Add1(int a, int b) // Call by Value
{
    int c;
    c = a+b;
    printf("Address of a in Add1 = %d\n", &a);
    return (c);
}

int     Add2(int *a, int *b) // Call by Reference
{
    int c;
    c = *a + *b;
    printf("Address of a in Add2 = %d\n", &a);
    printf("Value in a of Add2 (address of a of main) = %d\n", a);
    printf("Value at address store in a of Add2 = %d\n", *a);
    return (c);
}

int     *Add3(int *a, int *b) // Call by Reference = return pointer to integer, dont do this
{
    int c;
    c = *a + *b;
    return (&c);
}

int     *Add4(int *a, int *b) // Call by Reference = return pointer to integer
{
    int *c;
    c =(int*)malloc(sizeof(int));
    *c = *a + *b;
    return (c);
}

void    PrintHello()
{
    printf("Hello\n");
}

int     main(void)
{
    int a;
    int b;
    int p1;
    int p2;
    int *p3;
    int *p4;
    a = 2;
    b = 4;
    p1 = Add1(a,b);
    p2 = Add2(&a, &b);
    p3 = Add3(&a, &b);
    p4 = Add4(&a, &b);
    printf("Address of a in main = %d\n", &a);
    printf("SUM1 = %d\n", p1); 
    printf("SUM2 = %d\n", p2); 
    printf("SUM3 = %d\n", *p3); // ?
    printf("SUM4 = %d\n", *p4);
    return (0);
}