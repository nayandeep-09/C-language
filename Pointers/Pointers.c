// Pointers.

#include <stdio.h>

int main()
{
    int i = 11;
    int j = &i;    // this also stores teh address of the i
    printf("This will print address of a: %p\n", &i); // This both will print the same address of the i
    printf("This will print address of a: %p\n", j);  // This both will print the same address of the i
    // This shows in which memory address this is stored in.
    return 0;
}

/*  This will print address of a: 0061FF18
    This will print address of a: 0061FF18      */

#include <stdio.h>

int main()
{
    int i = 11;
    int j = &i;
    int k = 12;    // this also stores teh address of the i
    printf("This will print address of k: %u\n", &i);
    printf("This will print address of i: %u\n", j);  // This will print the same address of the unsigned integer
    printf("This will print address of i: %u\n", &k);
    // This shows in which memory address this is stored in.
    return 0;
}

/*  This will print address of a: 6422296
    This will print address of a: 6422292
    This will print address of a: 6422296     */

    #include <stdio.h>

int main()
{
    int i = 11;
    int* j = &i;    // to use print addressed value use * after int and the print *j
    int k = 12;    // this also stores teh address of the i
    // printf("This will print address of k: %u\n", &i);
    // printf("This will print address of i: %u\n", j);  // This will print the same address of the unsigned integer
    // printf("This will print address of i: %u\n", &k);
    // This shows in which memory address this is stored in.

printf("This will print the value of j stored address : %d\n", *(&i));
printf("This will print the value of j stored address : %d\n", *j);

    return 0;
}

/*  This will print the value of j stored address : 11
    This will print the value of j stored address : 11      */

#include <stdio.h>

int main()
{
    int i = 11;
    int* j = &i;

printf("This will print the value of j stored address : %d\n", *(&i));
printf("This will print the value of j stored address : %d\n", *j);
printf("This will print the value of j stored address : %d\n", &j);
// the variable storing the address of the value or variable also have their own address
// for eg- 11 storing i address is 6422296 so the j is storing the 6422296 and have their own adress too it can be 6422295

    return 0;
}

/*      This will print the value of j stored address : 11
        This will print the value of j stored address : 11
        This will print the value of j stored address : 6422296         */