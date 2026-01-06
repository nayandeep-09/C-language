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
// swap function.
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

//  Swapping with the call by reference
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

