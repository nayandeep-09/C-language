//Q1- Which of the following is invalid in C?

a. int a=1; int b = a; // True
b. int v = 3*3; // True
c. char dt = ‘21 dec 2020’; // False because char only stores single alphabet or character.

//Q2 - What data type will 3.0/8 – 2 return?
#include <stdio.h>

int main(){
    int a = 8;
    float b = 3.0;
    int c = 2;
    
    printf("%f", (b/a)-c);

    return 0;
}

//Output - -1.625000

#include <stdio.h>

int main(){
    float a = 3.0/8-2;
    
    printf("%f", a);

    return 0;
}

//Output - -1.625000

//Q3 - Write a program to check whether a number is divisible by 97 or not.

#include <stdio.h>

int main(){
    int a = 194;

    printf("The remainder is %d", a%97);
        
    return 0;
}

//output - The remainder is 0

//Q4- Explain step by step evaluation of 3*x/y – z+k, where x=2, y=3, z=3, k=1
 #include <stdio.h>
 
 int main(){
    int x=2;
    int y=3;
    int z=3;
    int k=1;

    printf("%d", 3*x/y-z+k);
    // 3*x/yṣ-z+k
    // 3*2/3 - 3+1
    // 6/3 - 3+1
    // (2 - 3)+1
    // -1+1
    // 0
    return 0;
 }
//  output = 0

// Q5 - 3.0 + 1 will be:
// a. Integer - NO.
// b. Floating point number - Yes because it will be in decimal 4.0.
// c. Character - No.