#include <stdio.h>

int     main(void)
{
    int a;
    char b;
    float c;
    int *pa;
    char *pb;
    

    a = 1025;
    b = 3;
    pa = &a;
    pb = &b;
    
    printf("int = %d bytes\nchar = %d byte\nfloat = %d bytes\n", sizeof(int), sizeof(char), sizeof(float));
    //check address pa & pa+1 = 4 bytes
    printf("PA     : Value %d, Address %d\n", *pa, pa);
    printf("PA + 1 : Value %d, Address %d\n", *(pa+1), pa+1);
    //check address pb & pb+1 = 1 byte
    printf("PB     : Value %d, Address %d\n", *pb, pb);
    printf("PB + 1 : Value %d, Address %d\n", *(pb + 1), pb + 1);
    //typecasting
/*  char *p0;
    p0 = (char *)pa; 
    printf("P0     : Value %d, Address %d\n", *p0, p0);
    printf("P0 + 1 : Value %d, Address %d\n", *(p0 + 1), p0 + 1);*/
    //Void Pointers - generic pointers; void pointers cant dereference.
    void *p1;

    p1 = pa;
    printf("P1     : Address %d\n", p1);
    printf("P1 + 1 : Address %d\n", p1 + 1); //it shold be error !

}