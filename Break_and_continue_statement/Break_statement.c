// Break statement -
    // Used to Stop the alteration.
#include <stdio.h>

int main() {
    for(int i=0; i<10 ; i++){
        if(i==5){
            break;      //stop the for loop and if statement when the value of i is 5
        }
        printf("For loop is done now %d\n", i);
    }

    return 0;
}

/*  For loop is done now 0
    For loop is done now 1
    For loop is done now 2
    For loop is done now 3
    For loop is done now 4      */

// Q - Print numbers from 1 to 20, but stop printing when the number becomes 13.

#include <stdio.h>

int main() {
    for(int i=1; i<20 ; i++){
        if(i==13){
            break;
        }
        printf("%d\n", i);
    }

    return 0;
}

/*  1
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
    12      */

//  Q- Takes numbers from the user continuously, Stops when the user enters a negative number using break;

#include <stdio.h>

int main() {
    int i;
    
    for( ; ;){
        printf("Enter the number: \n");
        
    scanf("%d", &i);
    
    if(i < 0){
        
        printf("Not negative one bro\n");
        
        break;
    }
    printf("Okay bro its positive %d\n", i);
    }
    return 0;
}

/*  Enter the number: 
    5
    Okay bro its positive 5
    Enter the number: 
    6
    Okay bro its positive 6
    Enter the number: 
    0
    Okay bro its positive 0
    Enter the number: 
    -5
    Not negative one bro        */