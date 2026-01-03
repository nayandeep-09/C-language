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