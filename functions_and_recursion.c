// without use of function

#include <stdio.h>

int main()
{
    int a = 10;
    int b = 5;
    int c = a + b;
    printf("sum is %d\n", c);

    int a1 = 5;
    int b1 = 2;
    int c1 = a1 + b1;
    printf("sum is %d\n", c1);
    return 0;
}

// half shortened use of function

#include <stdio.h>
int sum(int, int);  // Function Prototype
int sum(int x, int y)   // Function Definition
{
    printf("sum is %d\n", x + y);
    return x + y;
}
int main()
{

    int a = 10;
    int b = 5;
    sum(a, b);

    int a1 = 5;
    int b1 = 2;
    sum(a1, b1);
    return 0;
}

// full shortened use of function.

#include <stdio.h>
int sum(int, int);// Function Prototype
int sum(int x, int y)   // Function Definition
{
    printf("sum is %d\n", x + y);
    return x + y;
}

int main()
{

    sum(10, 5);
 
    sum(5, 2);
    return 0;
}


#include<stdio.h>
    // Function prototype
    void display();
int main()
{
    int a;     // Variable declaration
    display(); // Function call
    return 0;  // Return statement
}
// Function definition
void display()
{
    printf("hi i am display\n"); // Printing the message
}