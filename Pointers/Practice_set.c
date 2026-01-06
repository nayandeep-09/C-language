// Q1- Write a program to print the address of a variable. Use this address to get the value of the variable.

#include <stdio.h>

int main(){
    int a = 10;
    int *b = &a;
    
    printf("value of a is : %d\n",a);
    // prints value of a.
    printf("address of a is : %p\n",&a);
    // prints address of a stored in.
    printf("value of a by the address : %d\n",*&a);
    // prints the value of a with the address
    printf("value of a with b : %d\n",*b);
    return 0;
}

/*  value of a is : 10
    address of a is : 0061FF18
    value of a by the address : 10
    value of a with b : 10          */

// Q2- Write a program having a variable ‘i’. Print the address of 
//      ‘i’. Pass this variable to a function and print its address.
//        Are these addresses same? Why?

#include <stdio.h>
int addr(int a, int *b) 
{   // Passes this variable to a function with its address
    printf("address of i in function %p\n", &a);
    // Print its address
    if (&a == &b)
    { // checks both these addresses same!
        printf("both addresses are same");
    }
    else
    {
        printf("both addresses are different");
    }
}
int main()
{
    int i = 10; // Write a program having a variable ‘i’

    printf("Address of i in main is %p\n", &i);
    // Print the address of ‘i’
    addr(i, &i);
    return 0;
}
/*      Address of i in main is 0061FF1C
        address of i in function 0061FF00
        both addresses are different          */

// Q3- Write a program to change the value of a variable to ten times of its current value.

#include <stdio.h>
int tenx(int *i){
  *i=  *i * 10;    //mutliplies with 10 and stores the total in that address again forever.
}
int main(){
    int a = 10;
    tenx(&a);
    printf("The 10x of value a is %d %d",a);
    //prints the the new value of a.
    return 0;
}

//  The 10x of value a is 100

//Q4. Write a function and pass the value by reference.
#include <stdio.h>
int pass(int*a){    //it will change the value of a into 40.
    *a = 40;
    return *a;
}
int main(){
    int a = 5;
    pass(&a);
    printf("value of a is %d",a);
    return 0;
}

// value of a is 40

//  Q5- Write a program using a function which calculates the sum and average of two numbers.
//  Use pointers and print the values of sum and average in main().
#include <stdio.h>
int sum_avrg(int a, int b, int *sum, int *average){
    *sum = a+b;
    *average = (a+b)/2;
    return 0;
}
int main(){
    int a = 10;
    int b = 20;
    int sum, average;
    sum_avrg(a, b, &sum, &average);
    printf("the sum of two numbers is %d\n",sum);
    printf("the average of two numbers is %d\n",average);

    return 0;
}

/*      the sum of two numbers is 30
        the average of two numbers is 15        */      

//Q6- Write a program to print the value of a variable i by using “pointer to pointer” type of variable.
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
//  Value of i = 10.

// Q7- q3- Write a program to change the value of a variable to ten times of its current
// value and verify that it does not change the value ofb the said variable.

#include <stdio.h>
int tenx(int i){
  i=  i * 10;   
 return i; 
}

int main(){
    int a = 10;
    
    printf("The 10x of value a is %d and value of a is still %d",tenx(a),a);
    return 0;
}

//  The 10x of value a is 100 and value of a is still 10.