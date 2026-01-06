// POINTERS
// With Integers.
// Use of %p *pointer* and the %u *unsigned address*
#include <stdio.h>

int main()
{
    int i = 24;
    int j = &i;
    printf("the value of i or i is store in = %p\n", &i);
    printf("J is stored in = %p\n", j);
    // %p and &i Basically this prints the address of the i in hexadecimal.
    return 0;
}

/*  the value of i or i is store in = 0061FF18
    J is stored in = 0061FF18       */

#include <stdio.h>

int main()
{
    int i = 24;
    int j = &i; // To store the address *not the value* we have to use & with varible so &i.
    printf("I is stored in the = %u\n", &i);
    printf("j is stored in = %u\n", j);
    // This %u will print the address in decimal value
    return 0;
}

/*      I is stored in the = 6422296
        j is stored in = 6422296        */


// Find the value with given varible,
// *value at address* or * star

#include <stdio.h>

int main()
{
    int i = 24;
    int *j = &i; //if variable stored any other varible weve to use the *before variable name *j
    
    //lets find which value is stored in the j.
    printf("The value inside J is = %d\n", *(&i));
    printf("The value inside J is = %d\n", *j);
    // we have to use the * before the variable name.
    // weve to use the *() with the variable name of some value.

    return 0;
}
/*  The value inside J is = 24
    The value inside J is = 24      */

#include <stdio.h>

int main()
{
    int i = 24;
    int *j = &i; //if variable stored any other varible weve to use the *before variable name *j
    
    //lets find which value is stored in the j.
    printf("The value inside J is = %d\n", *(&i));
    printf("The value inside J is = %d\n", *j);
    printf("The value inside J is = %d\n", &j); // J also have their own address
    // we have to use the * before the variable name.
    // weve to use the *() with the variable name of some value.

    return 0;
}

/*  The value inside J is = 24
    The value inside J is = 24
    The value inside J is = 6422296     */

#include <stdio.h>

int main()
{
    char i = 'A';
    char j = &i;    //j stores the address of the character.

    float a = 10.50;
    float *b = &a;
    // for characters.
    printf("The value inside J is = %p\n", &i);
    printf("The value inside J is = %p\n", j);
    printf("The value inside J is = %p\n\n", &j); 
    // for Float values.
    printf("The value inside J is = %p\n", &a);
    printf("The value inside J is = %p\n", b);
    printf("The value inside J is = %p\n", &b); 

    return 0;
}

/*  The value inside J is = 0061FF1F
    The value inside J is = 0000001F
    The value inside J is = 0061FF1E

    The value inside J is = 0061FF18
    The value inside J is = 00000000
    The value inside J is = 0061FF14     */

#include <stdio.h>

int main()
{
    char i = 'A';
    char *j = &i;    //j stores the address of the character.

    float a = 10.50;
    float *b = &a;
    // for characters.
    printf("The value inside J is = %c\n", *(&i));
    printf("The value inside J is = %c\n", *j); 
    // for Float values.
    printf("The value inside J is = %f\n", *(&a));
    printf("The value inside J is = %f\n", *b);
    printf("The value inside J is = %f\n", *(&b)); 

    return 0;
}

/*  The value inside J is = A
    The value inside J is = A
    The value inside J is =

    The value inside J is = 10.500000
    The value inside J is = 10.500000
    The value inside J is = 10.500000   */

    #include <stdio.h>

int main(){
    int i = 6;
    int* j = &i;    // j holds the address of i and * prints the value stored.
    int** h = &j;   // h holds the add of add and ** prints the value if address stored in j and j will print the value stored in i.

    printf("This will print the i %d\n", i);
    printf("This will print the i %d\n", *j);
    printf("This will print the i %d\n\n", **h);
    return 0;
}
/*  This will print the i 6
    This will print the i 6
    This will print the i 6 */

// TYPES OF FUNCTION CALL-  1. Call by value 1. Call by reference.
// Call by value-->
// we are using call by value from the start of the topic.
#include <stdio.h>
int sum (int a,int b){
    a =10;
    return a+b; 
}
int main(){
    int a = 50;
    int b = 40;
    
    printf("Print the value of a : %d\n",a);
    // prints the value of a = 50 normally
    printf("Print the value of a : %d\n",sum (a, b));
    // this will print the sum of the values of a and b but when goes in function definition it will takes a as 10 and adds 10+40 and will print the 50 as output.
    return 0;
}
/*  Print the value of a : 50
    Print the value of a : 50   */

//call by reference -->
#include <stdio.h>
int sum (int *a,int *b){
    *a =10;
    return *a+*b; 

}
int main(){
    int a = 50;
    int b = 40;
    
    printf("Print the value of a : %d\n",sum (&a, &b));
    //  the func will store the address of value of a & b and uses function
    //  func will takes the value from stored location a=50 and b = 40.
    //  as per 1st line a = 10; a becomes and and sum happend of 10 + 40 = returns 50
    printf("Print the value of a : %d\n",a);
    // here the value become 10 of a and stored in the address so a is changed.
    return 0;
}

/*  Print the value of a : 50
    Print the value of a : 10       */

// swap function for a and b with call by value.
#include <stdio.h>
int swap(int a, int b){
    int c = a;
    a=b;
    b=c;
    return 0;
}
int main(){
    int a= 10;
    int b= 20;

    swap(a, b);
    printf("a is: %d\nb is: %d\n",a,b);
    return 0;
}
/*  a is: 20
    b is: 10    */

//  Swapping with the call by address
#include <stdio.h>
int swap(int *a, int *b){
    int c = *a;
    *a=*b;
    *b=c;
    return 0;
}
int main(){
    int a= 10;
    int b= 20;

    swap(&a, &b);
    printf("a is: %d\nb is: %d\n",a,b);
    return 0;
}
/*  a is: 20
    b is: 10    */

