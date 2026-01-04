// Q1. Write a program using function to find average of three numbers.

#include <stdio.h>
int averg(int, int, int);

int averg(int a, int b, int c)
{
    int d = (a + b + c) / 3;
    return d;
}
int main()
{
    int a, b, c;
    printf("enter the first value: ");
    scanf("%d", &a);
    printf("enter the second value: ");
    scanf("%d", &b);
    printf("enter the third value: ");
    scanf("%d", &c);

    printf("The average of three numbers is: %d", averg(a, b, c));

    return 0;
}

/*      enter the first value: 50
        enter the second value: 55
        enter the third value: 10
        The average of three numbers is: 38     */

//  Q2- Write a function to convert Celsius temperature into Fahrenheit.
#include <stdio.h>
float celtofer(int); // expected answer in float so use float in function also.
float celtofer(int a)
{
    float fer = (9.0 / 5) * a + 32; // fer will be a float so use float not int.
    return fer;
}

int main()
{
    int temp;
    printf("Enter the tempreature in celcius: ");
    scanf("%d", &temp);

    printf("The temp in Ferhanite is : %.1f", celtofer(temp));
    return 0;
}

/*    Enter the tempreature in celcius: 26
      The temp in Ferhanite is : 78.8         */

// Q3- Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s2.
#include <stdio.h>
float force(int);
float force(int a)
{
    float f = a * 9.8;  //calculates the force on earth.
    return f;
}

int main()
{
    int m;
    printf("Enter you body mass: ");
    scanf("%d", &m);
    printf("The force on earth is: %.1f N", force(m));
    return 0;
}

/*      Enter you body mass: 65
        The force on earth is: 637.0 N      */

//  Q4. Write a program using recursion to calculate nth element of Fibonacci series.

#include <stdio.h>

// Function to calculate the nth Fibonacci number using recursion
int fib(int n) {
    if (n == 0) {
        return 0; // Base case 1: the 0th Fibonacci number is 0
    } else if (n == 1) {
        return 1; // Base case 2: the 1st Fibonacci number is 1
    } else {
        return fib(n - 1) + fib(n - 2); // Recursive case: sum of the two previous Fibonacci numbers
    }
}

int main() {
    int n;
    printf("Enter the term number: ");
    scanf("%d", &n);

    int result = fib(n); // Call the recursive function
    printf("The %dth Fibonacci number is: %d\n", n, result);

    return 0;
}

/*       Enter the term number: 15
        The 15th Fibonacci number is: 610       */

/* Q5. What will the following line produce in a C program:
        int a = 4;
        printf("%d %d %d \n", a, ++a, a++);     */
        
#include <stdio.h>

int main(){
    int a = 4;
        printf("%d %d %d \n", a, ++a, a++);
    return 0;
}

//  6 6 4

// Q6- Write a recursive function to calculate the sum of first ‘n’ natural numbers.
#include <stdio.h>
int sum(int n){
    if(n==0){
        return 0;
    }else{
        return n+sum(n-1);
    }
}

int main(){
    int a=8;
    printf("Sum of %d numbers is: %d", a, sum(a));
    return 0;
}

//      Sum of 8 numbers is: 36

// Q7- Write a program using function to print the following pattern (first n lines)
//      *
//      * * *
//      * * * * *
#include <stdio.h>

// Function to print the star pattern
void printStarPattern(int n) {
    for (int i = 1; i <= n; i++) {
        int count = 2 * i - 1;
        for (int j = 0; j < count; j++) {
            printf("*");
        }
        printf("\n"); // Move to the next line after printing each row
    }
}

int main() {
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    
    printStarPattern(n); // Call the function once with the user input
    
    return 0;
}

