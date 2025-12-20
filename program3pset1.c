//Q3 - Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit).
#include <stdio.h>

int main(){
    int celcius;
    printf("Enter the tempreture in celcius :");
    scanf("%d", &celcius);
    printf("The tempreture %d which is in Fahrenheit is : %d", celcius, celcius*9/5+32);
    // here for 2nd %d or for new output solved value to get printer we have to use variable which is celcius here for two times first for print without solved and second celcius for solved answer.
        return 0;
}

/*
Enter the tempreture in celcius :92
The tempreture 92 which is in Fahrenheit is : 197
*/

#include <stdio.h>

int main(){
    float c=10, f;
    f = c*(9/5)+32;
    printf("The value of fehranhiet is %.2f", f);
    return 0;
}

// The value of fehranhiet is 42.00