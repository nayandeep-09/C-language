/*  For loop
    This loop is firstly initialize than tests the condition and then
    visits inside the loop and then lastly increase or decreased
    whatever written in for loop last condtion. */

#include <stdio.h>

int main()
{
    int i;
    printf("Enter the value: ");
    scanf("%d", &i);
    // given value; condition; prints value--: increased value of i
    // int n =1 : if n is less or equal to i then print ("%d\n", n); and lastly increase value if i with 1.
    for (int n = 1; n <= i; n++)
    {
        printf("%d\n", n);
    }

    return 0;
}

/*  Enter the value: 12
    1
    2
    3
    4
    5
    6
    7
    8
    9
    10
    11
    12            */


    #include <stdio.h>

int main(){
    int n; // or it can ve declared inside for loop also as - for (int n = 7: ---);
    for ( n = 7; n; n--) // in middle condition where only n written that means if the value of n is non 0 then condion executes.
            // if the condion of n will become 0 it will stop working
            //n --- is like if n = 0 then  make condition false.
    {
        printf("%d\n", n);
    }
    
    return 0;
}

/*      7
        6
        5
        4
        3
        2
        1       */


        // Write a program to print ‘n’ natural numbers in reverse order.

    #include <stdio.h>

int main(){
    int i;
    printf("enter the value from to start: ");
    scanf("%d", &i);
    // gets input
    for(i; i; i--){ // input already taken for i no need to define value for i again.
        printf("%d\n", i);
    }
    return 0;
}

/*      enter the value from to start: 5
        5
        4
        3
        2
        1   */