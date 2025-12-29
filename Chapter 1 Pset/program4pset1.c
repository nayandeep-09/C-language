//Q4 - Write a program to calculate simple interest for a set of values representing principal, number of years and rate of interest.

#include <stdio.h>

int main(){
    int P;
    int R;
    int T;
    printf("Enter the Princiapal Amount :");
    scanf("%d", &P);
    printf("Enter the Rate :");
    scanf("%d", &R);
    printf("Enter the Time In years :");
    scanf("%d", &T);

    printf("Simple interest for Given value %d is %d", P, P * R * T / 100);
    return 0;
}

/*
Enter the Princiapal Amount :1000
Enter the Rate :10
Enter the Time In years :5
Simple interest for Given value 1000 is 500
*/

