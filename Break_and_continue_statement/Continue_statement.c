    /*  Continue Statement-
        Continue statement is used to stop current next process available under current loop.
        and again starts from starting. Basically not stops whole program to work permanently.*/

#include <stdio.h>

int main(){
    int i;
    for(i = 10; i<=20 ; i++){
        if(i == 12 || i == 15 || i == 17){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}

/*      10
        11
        13
        14
        16
        18
        19
        20      */

// Q.1- Print numbers 1 to 15, but skip all odd numbers.

#include <stdio.h>

int main(){
    int i;
    for( i=1; i<=15 ;i++){
        if(i % 2 != 0){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}

/*      2
        4
        6
        8
        10
        12
        14      */

