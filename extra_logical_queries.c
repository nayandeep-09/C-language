// Addition of two numbers like input 45 then 4+5 if 345 then 3+4+5

#include <stdio.h>

int main() {
    int i, r, sum = 0;


    printf("Enter an integer: ");
    scanf("%d", &i);

  // Keep loop running.
    while (i > 0) {
        r = i % 10;    
        sum = sum + r;   
        i = i / 10;         
    }
    printf("The sum of the digits is: %d\n", sum);

    return 0;
}


