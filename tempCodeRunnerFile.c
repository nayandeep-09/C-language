#include <stdio.h>

int main()
{
    int income;
    printf("Enter your annual income here: ");
    scanf("%d", &income);

    if(income >= 1000000){
        printf("The income tax calculate with 30%% and you have to pay : %d", (income*30)/100);
    }else if(income >= 500000 && income <= 999999){
        printf("the income tax calculated with 20%% and you have to pay : %d", (income*20)/100);
    }else if(income >= 250000 && income <= 499999){
        printf("the income tax calculated with 5%% and you have to pay : %d", (income*5)/100);
    }else{
        printf("your income is less than 250000 you are not liable to pay income tax.");
    }
    return 0;
}