#include <stdio.h>

/*
*** RULE : A string in C has to be null terminated
1. how to store strings
    size of array >= no. of charactors in string+1 
    "john" : size >= 5
    char c[4]
    c[0] = j, c[1] = o, c[2] = h, c[3] = n, c[4] = '\0' 
2. Arrays and Pointers are different type that are used in similar manner.
3. Arrays are always passed to function by reference.
*/
void    print(const char* c)
{
    // c[0] = 'a';
    while (*c != '\0')
    {
        printf("%c", *c);
        c++;
    }
    printf("\n");
}

void    print2(char* c)
{
    int i;
    
    i = 0;
    while (c[i] != '\0')
    {
        printf("%c", c[i]);
        i++;
    }
    printf("\n");
}

int     main(void)
{
    char c[] = "John"; // string gets stored in the space for array
    // char *c = "John"; // string gets store as compile time constant 
    // c[0] = 'A';
    print(c);
    print2(c);

    char c2[20];
    c2[0] = 'A';
    c2[1] = 'B';
    c2[2] = 'C';
    c2[3] = 'D';
//    c2[4] = '\0';
    printf("%s\n", c2);
    return (0);
}