int main()
{
    // with the help of this we can start working on program and code.

    int a;
    // to declare some variable that a is some container and which is storing integer.

    a = 5;
    // the container a have 5 inside it.
    printf("Hellow world");
    // to print anything written or given under printcode

    printf("%d", a);
    // this %d is used to print the integer values only.

    return 0;
}
// it shows now the program is finished.

float b;
b = 2.5;
// fload is variable or container which stores decimnal values only

printf("%f", b);
// to print the float value %f is used.

char c;
c = 'A' // c='+' c='#' c='>'
    // char is container used to store the only one character or special signs and characters.

    // extra example
    int a = 5;
float b = 2.5 char c = '@' 
printf("%c = %.1f", c, a - b);
// output - @ = 2.5
//  here %c prints the value of C and then = sign is printed and %f or %.1f is used to solve a-b and then print
//%.1f is used get the value after lessing all 0 after the value like if our outpur answer is 1.2000 then we need %.1f to print it like 1.2 after removing all zero

// Input from User
#include<stdio.h>

int main(){
    int a=5;
    scanf("%d", &a);
    //&a takes the value from user to save it in variable a or "%d"
    //scanf used to take input from user.

    printf("Entered value is : %d",a);
    return 0;
}

#include<stdio.h>

int main(){
    int a=5;
    float b=1.5;
    char c='$';
    printf ("the value of a : %d\n", a);
    printf ("the value of b : %f\n", b);
    printf ("the value of c : %c\n", c);
//here we cant write anything before %d or %f pr %c and \n is used to write in new line.

        return 0;
}

/* Output
the value of a : 5
the value of b : 1.500000
the value of c : $
*/