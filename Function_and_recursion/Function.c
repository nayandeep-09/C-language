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
int sum(int, int);    // Function Prototype
int sum(int x, int y) // Function Definition
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
int sum(int, int);    // Function Prototype
int sum(int x, int y) // Function Definition
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

#include <stdio.h>
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

// Important logic
#include <stdio.h>

int change(int); // functional prototype

int change(int a)
{ // functional definition
    a = 77;
    return 0;
}
int main()
{
    int b;
    b = 50;
    change(b); // functional call
    printf("b is %d", b);
    return 0;
}

// b is 50

// Quiz- Use the library function to calculate the area of a square with side a.

#include <stdio.h>
#include <math.h>
int main()
{
    int side = 5;

    printf("Area of square is: %.1f", pow(side, 2)); // to use the function with existing value of side so we used pow function inside the print function.
            //pow function is used to calculate square or roots of values.
    return 0;
}
