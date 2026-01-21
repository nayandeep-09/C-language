// Free();

// syntax - free(ptr); //memory of ptr is released.

// it will frees the pointers or memory stored in pointer.

// Quick Quiz: Write a program to demonstrate the usage of free() with malloc().


#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n = 5;
    float *ptr;
    ptr = (float *)malloc(n * sizeof(float));
    // malloc will return or output will be Null pointer.

    ptr[0] = 10.54;
    ptr[1] = 11.20;
    ptr[2] = 12.11;
    ptr[3] = 13.52;
    ptr[4] = 14.62;
    for (int i = 0; i < 5; i++)
    {
        printf("%.2f\n", ptr[i]);
    }

    free(ptr);
    
    printf("\n%.2f", ptr[0]);

    return 0;
}

/*  10.54
    11.20
    12.11
    13.52
    14.62

    0.00    */
