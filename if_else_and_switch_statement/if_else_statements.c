// Conditional statement.
// • if–else statement
// • switch statement

// • if–else statement
#include <stdio.h>

int main(){
    int age=10;
    if(age>5){
        printf("Age is more than 5");
    }
    return 0;
}
// output- Age is more than 5

// Else statement with IF/
#include <stdio.h>

int main(){
    int age=4;
    if(age>5){
        printf("Age is more than 5");
    }
    else{
        printf("age is less than 5");
    }
    return 0;
}

//output - Age is less than 5

#include <stdio.h>

int main(){
    int age=10;
    if(age>5){
        printf("Age is more than 5");
    }
    else{
        printf("age is less than 5");
    }
    return 0;
}

//output - Age is more than 5

#include <stdio.h>

int main(){
    int age;
    age = 10;
    if(age%2==0){
        printf("Age is divisible by 2 and its even number");
    }
    else{
        printf("Age is odd number");
    }
    return 0;
}

// Age is divisible by 2 and its even number

//In C a non-zero value is considered to be true
#include <stdio.h>

int main(){
    if(10){
        printf("this printed");
    }
    return 0;
}
//output - this printed
//this is printed because the non zero value considered that the condition is true and the operation available inside if performs.

#include <stdio.h>

int main(){
    if(0){
        printf("this printed");
    }
    return 0;
}

//No output.

/*RELATIONAL OPERATORS IN C
==, >=, >, <, <=, !=
*/


#include <stdio.h>

int main(){
    int m;

    printf("Your marks: ");
    scanf("%d", &m);

    if (m >= 90 && m <= 100)
    {
        printf("Grade A");
    }
    else if (m>=80 && m<=90)
    {
        printf("Grade B");
    }else if (m>=70 && m<=80)
    {
        printf("Grade C");
    }else if (m>=60 && m<=70)
    {
        printf("Grade D");
    }else if (m>=50 && m<=60)
    {
        printf("Grade E");
    }else if (m<=49)
    {
        printf("Failed");
    }
    else{
        printf("Error");
    }
    
    return 0;
}

/*
Your marks: 50
Grade E
*/