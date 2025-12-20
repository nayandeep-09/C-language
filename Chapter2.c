#include <stdio.h>

int main(){
    int a=10;
    int b=a;
// value can be shown like this too
    printf("the value of a is %d and value J is %d", a, b);
    return 0;
}

//Arithmetic Operators 
//Addition

#include <stdio.h>

int main(){
    int a=10;
    int b=5;
    int c=a+b;
    printf("The value of a and b is > %d and > %d and their sum is : %d", a, b, c);

    return 0;
}

//The value of a and b is > 10 and > 5 and their sum is : 15

//Modulous %

int main(){
    int a=6;
    int b=5;
    int c=a+b;
    printf("The value of a and b is > %d and > %d and their mode is %d", a, b, a%b);

    return 0;
}

//The value of a and b is > 6 and > 5 and their mode is 1

#include <stdio.h>

int main(){
    int a=9;
    int b=2;
    float c=9/2;
    //The value of c is 4.000000 because int + int = int
    printf("The value of c is %f", c);
    return 0;
}

#include <stdio.h>

int main(){
    float a=9.0;
    int b=2;
    float c=a/b;
    //The value of c is 4.50 because float + int = float
    printf("The value of c is %.2f", c);
    return 0;
}

//In c if int = 3.2 (in int type value is float) then it will saved as 3 after decimal value will be vanished.

#include <stdio.h>

int main(){
    int k = 3.0/9;
    printf("%d", k);
    return 0;
}
//output is 0
//Here K is int so it will print only the number before decimal and rest will be skipped

#include <stdio.h>

int main(){
    float k = 3.0/9;
    printf("%.2f", k);
    return 0;
}
//output will be 0.33
// Here it will print the whole float value.

//operator presidence
#include <stdio.h>

int main(){
    int a=5;
    int b=4;
    int c=4;

    printf("The solution is %d", a*b/c);
    //first solved a*b=20 then 20/c=5 "Left to right solution"
    printf("\nThe value is %d", a+b/c);
    //first solved b/c=1 and then a+1=6 "first *-% then +-"
    return 0;
}

/*
The solution is 5
The value is 6
*/

#include <stdio.h>

int main(){
    int a=8;
    int b=6;
    int c=12;
    
    printf("Solutions can be %d", a*b/c*a);
    // solved a*b=48 then 48/c=4 and then 4*8=32
    return 0;
}

//output- Solutions can be 32

#include <stdio.h>

//Typecasting
int main(){
    int a=10;
    float b=5.32;

    a = (int) b;
    //It will convert the float b=5.32 into INT = 5 and will store in A in the place of 10 it will replace 5
    printf("%d", a);

    return 0;
}