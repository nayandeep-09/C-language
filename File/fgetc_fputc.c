// Fgetc is used with read mode only.

#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("nayan.txt", "r");

    char c = fgetc(ptr);
    printf("%c", c);
    // this will print the first character of the file.
    return 0;
}

// Fputc with write
#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("nayan.txt", "w");
    fputc('c', ptr);
    // this will write c in whole txt file.
    return 0;
}

// With append
#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("nayan.txt", "a");
    // we will use append here
    fputc('c', ptr);
    // this will write c after last written work in txt file.
}
