// Malloc

/*  Syntax for malloc- ptr = (int *)malloc(n * sizeof(int));    */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    // malloc will return or output will be Null pointer.

    return 0;
}
// it will allocate the 4 interger storing memory like 4byte for each integer.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    // malloc will return or output will be Null pointer.

    ptr[0] = 10;
    ptr[1] = 11;
    ptr[2] = 12;
    ptr[3] = 13;
    printf("%d", ptr[1]);
    return 0;
}

/*  5
    11  */

/*  Quick Quiz: Write a program to create a dynamic array of 5 floats using malloc().*/

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

    return 0;
}
