/*  Do while Loop:- 
        Do while firstly runs the instructions written inside and then checks the 
        while condition outside if while condion is true it will keep running until its false.  */

#include <stdio.h>

int main(){
    int i = 5;
    do
    {
        printf("The do condtion is running\n"); // this will printed
        i++;                                    // i will be increased and is 6
        printf("Current value %d\n", i);        // prints 7
    } while (i<10);                             // 7 is less than 10 so continue runing do and while.
                                    // it will stop at 10 because 10 is not less than 10

    return 0;
}

/*  The do condtion is running
    Current value 6
    The do condtion is running
    Current value 7
    The do condtion is running
    Current value 8
    The do condtion is running
    Current value 9
    The do condtion is running
    Current value 10            */


// Quiz - Write a program to print first ‘n’ natural number using do-while loop. 

#include <stdio.h>

int main(){
    int n, i;
    printf("Enter the value: ");
    scanf("%d", &i);
    n=1;
    do
    {
        printf("\n%d", n);
        n++;
    } while (n<=i);
    
    return 0;
}

/*  1
    2
    3
    4
    5
    6
    7
    8        */

