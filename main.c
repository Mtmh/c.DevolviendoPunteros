#include <stdio.h>
#include <stdlib.h>

int * funcion(void)
{
    int *x;
    x = (int *) malloc(sizeof(int)); // Dinamica
    return x;
}

int main(void)
{
    int *p;
    p = funcion();
    *p = 5;
    printf("%d\n", *p);
    free(p);
    return 0;
}
