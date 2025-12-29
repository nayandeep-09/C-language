#include <stdio.h>

int main(){
    int a;
    printf("Enter the value in a: ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("Entered value is 1");
    case 2:
        printf("\nEntered value is 2");
    case 3:
        printf("\nEntered value is 3");
    case 4:
        printf("Entered value is 4");
    }
    return 0;
}

/*
Enter the value in a: 2

Entered value is 2
Entered value is 3
Entered value is 4
*/


#include <stdio.h>

int main(){
    int a;
    printf("Enter the value in a: ");
    scanf("%d", &a);

    switch (a)
    {
    case 1: //case of given int value is 1 then enter inside else jump on case 2
        printf("Entered value is 1");
        break; //break is used to break condition and stop the switch statement to work here.
    case 2: //case of given int value is 2 then enter inside else jump on case 3
        printf("\nEntered value is 2");
        break;
    case 3:
        printf("\nEntered value is 3");
        break;
    case 4:
        printf("\nEntered value is 4");
        break;
    }
    return 0;
}

/*
Enter the value in a: 2

Entered value is 2
*/

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the choice: ");
    scanf("%d", &a);
    printf("Enter the first value for calculation: ");
    scanf("%d", &b);
    printf("Enter the Second value for calculation: ");
    scanf("%d", &c);
    switch (a)
    {
    case 1:
        printf("Addition of given both number is : %d", b + c);
        break;
    case 2:
        printf("Substraction of given both number is : %d", b - c);
        break;
    case 3:
        printf("Multiplication of given both number is : %d", b * c);
        break;
    case 4:
        printf("Division of given both number is : %d", b / c);
    }
    return 0;
}

/* OUTPUT - 
Enter the choice: 2
Enter the first value for calculation: 20
Enter the Second value for calculation: 10
Substraction of given both number is : 10

Enter the choice: 4
Enter the first value for calculation: 50
Enter the Second value for calculation: 5
Division of given both number is : 10

*/

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the choice (1-Add, 2-Sub, 3-Mul, 4-Div): ");
    scanf("%d", &a);

    printf("Enter the first value: ");
    scanf("%d", &b);

    printf("Enter the second value: ");
    scanf("%d", &c);

    switch (a)
    {
        case 1:
            printf("Addition = %d", b + c);
            break;

        case 2:
            printf("Subtraction = %d", b - c);
            break;

        case 3:
            printf("Multiplication = %d", b * c);
            break;

        case 4:
            if (c != 0) //if C is no equal to 0 then print division
                printf("Division = %d", b / c);
            else // else print division not possible
                printf("Division not possible");
            break;

        default: // if any of choice or input not matches the print this last left thing which is default.
            printf("Invalid choice");
    }

    return 0;
}

/*
Enter the choice (1-Add, 2-Sub, 3-Mul, 4-Div): 5
Enter the first value: 2
Enter the second value: 3
Invalid choice
*/