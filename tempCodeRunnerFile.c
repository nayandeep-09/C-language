#include <stdio.h>

int main() {
    int i = 10;        // normal integer variable
    int *p;            // pointer to int
    int **pp;          // pointer to pointer

    p = &i;            // p stores address of i
    pp = &p;           // pp stores address of p

    printf("Value of i = %d\n", **pp);

    return 0;
}