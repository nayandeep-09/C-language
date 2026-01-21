// Calloc
// calloc is similar to the malloc with a little difference.
/*Syntax for calloc -     ptr = (float*) malloc(20, sizeof(float));*/
// (20, sizeof(float)) 20 is count of floats like we need 20 float values.

/*  Write a program to create an array of size n using calloc where n is an
    integer entered by the user.    */

#include <stdio.h>
#include <stdlib.h>

int main(){
    float n=5;
    float* ptr;
    ptr = (float*) calloc(n, sizeof(float));
    // malloc will return or output will be Null pointer.

    ptr[0]= 10.54;
    ptr[1]= 11.20;
    ptr[2]= 12.11;
    ptr[3]= 13.52;
    ptr[4]= 14.62;
    for (int i = 0; i < 5; i++)
    {
        printf("%.2f\n", ptr[i]);
    }
    
    
    return 0;
}