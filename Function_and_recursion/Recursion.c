// Recursion means when a functions recalls itself in it own.
// factorial of a number.
#include <stdio.h>
int fact(int n);
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    // fact(n)=fact(n-1)*n;
    return fact(n-1)*n;
}

int main(){
    int a;
printf("enter the number to know the factorial: ");
scanf("%d", &a);
    printf("factorial for %d is : %d",a, fact(a));
    
    return 0;
}
 
// factorial for 5 is : 120

//Sum of First n Natural Numbers
#include <stdio.h>

int sum(int n){
    if(n == 0)
        return 0;
    return n + sum(n - 1);
}

int main(){
    int n = 5;
    printf("Sum = %d", sum(n));
    return 0;
}


// Power of a Number (xⁿ)
#include <stdio.h>

int power(int x, int n){
    if(n == 0)
        return 1;
    return x * power(x, n - 1);
}

int main(){
    printf("Power = %d", power(2, 3));
    return 0;
}