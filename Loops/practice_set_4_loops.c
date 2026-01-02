// Q-1 Write a program to print multiplication table of a given number n. 

#include <stdio.h>

int main(){
    int i,j,n;
    printf("enter the value for table : ");
    scanf("%d", &i);
    for(n=1; n<=10 ; n++){
        if(i>0){
          j = i * n;
        }
        printf("%d * %d = %d\n", i, n, j);
    }
    return 0;
}

/*      enter the value for table : 5
        5 * 1 = 5
        5 * 2 = 10
        5 * 3 = 15
        5 * 4 = 20
        5 * 5 = 25
        5 * 6 = 30
        5 * 7 = 35
        5 * 8 = 40
        5 * 9 = 45
        5 * 10 = 50  */

// Q2- Write a program to print multiplication table of 10 in reversed order.
    #include <stdio.h>

    int main(){
        int i=10,j,n;
        
        for(n=10; n>=1 ; n--){
            j = i * n;

            printf("%d * %d = %d\n", i, n, j);
        }
        return 0;
    }

    /*  10 * 10 = 100
        10 * 9 = 90
        10 * 8 = 80
        10 * 7 = 70
        10 * 6 = 60
        10 * 5 = 50
        10 * 4 = 40
        10 * 3 = 30
        10 * 2 = 20
        10 * 1 = 10     */

// Q3- A do while loop is executed: MCQ
  a. At least once. 
  b. At least twice. 
  c. At most once. 
At least once

// Q4- What can be done using one type of loop can also be done using the other two 
types of loops – true or false? -------- True

// Q5 - Write a program to sum first ten natural numbers using while loop. 
#include <stdio.h>

int main(){
    int n,sum;
    n=1 ;
    sum=0;
    while(n<=10){
        sum = sum + n;  //we need 55 as output anyhow.
        n++;
    }
    printf("%d",sum); 
    
    return 0;
}

//  55

// Q6 - Write a program to implement program 5 using ‘for’ and ‘do-while’ loop. 
// solve 5th question with for and do-while loop
// With for loop
#include <stdio.h>

int main(){
    int n,sum;
    sum=0;
    for(n=1; n<=10; n++){
        sum = sum + n;
    }
    printf("%d",sum);
    
    return 0;
}

//      55

//with do-while
#include <stdio.h>

int main(){
    int n,sum;
    n=1;
    sum=0;
    do
    {
        sum = sum + n;
        n++;
    } while (n<=10);
    
    printf("%d",sum);
    
    return 0;
}
//      55


// Q-7Write a program to calculate the sum of the numbers occurring in the multiplication table of 8.eg- 8+16+24--80=?

#include <stdio.h>

int main(){
    int i,n,sum,j;
    sum = 0;
    i = 8;
    for(n=1; n<=10 ; n++){
        j = i * n;
        sum = sum+j;
    }
    printf("%d",sum);
    return 0;
}

//      440

// Q8- Write a program to calculate the factorial of a given number using a for loop.

#include <stdio.h>

int main() {
    int i, n;
    int fac = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fac = fac * i;
    }

    printf("Factorial = %d", fac);

    return 0;
}


/*  Enter a number: 7
    Factorial = 5040        */

// Q9- Solve question 8th with while loop.

#include <stdio.h>

int main() {
    int i, n;
    int fac = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fac = fac * i;
    }

    printf("Factorial = %d", fac);

    return 0;
}
//  Enter a number: 7
//  Factorial = 5040

// Q10- Write a program to check whether a given number is prime or not using loops. 

#include <stdio.h>

int main() {
    int i = 7;
    int n = 2; // Start from 2 because every number is divisible by 1

    // The loop runs ONLY as long as i is not divisible by n
    while (i % n != 0) {
        n++;
    }

    // If the first number that finally divides i is i itself, it's prime
    if (n == i) {
        printf("%d is prime", i);
    } else {
        printf("%d is not prime", i);
    }

    return 0;
}

// 7 is prime
