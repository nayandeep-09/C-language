// What will be the output of this program 
// int a = 10; 
// if (a = 11) 
// printf("I am 11"); 
// else  
// printf("I am not 11"); 

#include <stdio.h>

int main()
{
    int a = 10;
    if (a = 11) // this is assignment operator which updated the value of a = 11
                // firstly a = 10 then if (a = 11) converted a = 11
                // to compare if a=11 then print i am 11 so use (a == 11) not (a = 11)
        printf("I am 11");
    else
        printf("I am not 11");
    return 0;
}

// I am 11

#include <stdio.h>

int main()
{
    int a = 10;
    if (a == 11) // Now used == to compare the two values not assign or update values.
        printf("I am 11");
    else
        printf("I am not 11");
    return 0;
}

// I am not 11

/* Q2 - Write a program to determine whether a student has passed or failed. To pass, a
        student requires a total of 40% and at least 33% in each subject. Assume there
        are three subjects and take the marks as input from the user. */

#include <stdio.h>

int main()
{
    int hindi, english, maths, total;
    printf("Enter marks obtained in hindi: ");
    scanf("%d", &hindi);
    printf("Enter marks obtained in enlglish: ");
    scanf("%d", &english);
    printf("Enter marks obtained in maths: ");
    scanf("%d", &maths);

    total = (hindi + english + maths) / 3;
    // it will take totatl and devide from 3 to calculate percentage.

    if (total >= 40 && hindi >= 33 && english >= 33 && maths >= 33)
    // if the total is greater or equal to 40 and hindi,english,maths also greater or equal to 33 then print pass else print failed.
    {
        printf("You are passed");
    }
    else
    {
        printf("You are failed");
    }

    return 0;
}

/*
    Enter marks obtained in hindi: 35
    Enter marks obtained in enlglish: 36
    Enter marks obtained in maths: 50
    You are passed

    Enter marks obtained in hindi: 35
    Enter marks obtained in enlglish: 35
    Enter marks obtained in maths: 45
    You are failed
*/

/*  Q.3 - Calculate income tax paid by an employee to the government
as per the slabs mentioned below:
    Income Slab     Tax
    2.5 – 5.0L       5%
    5.0L - 10.0L     20%
    Above 10.0L      30%

    Note that there is no tax below 2.5L. Take income amount as an
input from the user. */

#include <stdio.h>

int main()
{
    int income;
    printf("Enter your annual income here: ");
    scanf("%d", &income);

    if (income >= 1000000)
    {
        printf("The income tax calculate with 30%% and you have to pay : %d", (income * 30) / 100);
    }
    else if (income >= 500000 && income <= 999999)
    {
        printf("the income tax calculated with 20%% and you have to pay : %d", (income * 20) / 100);
    }
    else if (income >= 250000 && income <= 499999)
    {
        printf("the income tax calculated with 5%% and you have to pay : %d", (income * 5) / 100);
    }
    else
    {
        printf("your income is less than 250000 you are not liable to pay income tax.");
    }
    return 0;
}

/* Enter your annual income here: 900000
   the income tax calculated with 20% and you have to pay : 180000

   Enter your annual income here: 300000
   the income tax calculated with 5% and you have to pay : 15000

   Enter your annual income here: 1100000
   The income tax calculate with 30% and you have to pay : 330000  */

/*  Q-4   Write a program to find whether a year entered by the user is a leap year or not.
Take year as an input from the user.  */

#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    // formula for the leap year find year fully divisible by 4 but not with 100 or fully divisible by 400 then its leap year.
    {
        printf("The entered year is leap year");
    }
    else
    {
        printf("Entered year is not a leap year");
    }
    return 0;
}

/*  Enter the year : 2024
The entered year is leap year

Enter the year : 2026
Entered year is not a leap year */

/* Q5- Write a program to determine whether a character entered by the user is
lowercase or not. */

#include <stdio.h>

int main()
{
    char letter;
    printf("enter the charcter to know if uppercase or lower: ");
    scanf("%c", &letter);

    if (letter >= 'a' && letter <= 'z')
    {   // In c character defined as ASCII value so we can
        // use greater less or equal signs with the alphabets it will be
        // compared as their ascii value which is 65 or whatever.
        printf("Entered character is Lower case");
    }
    else if (letter >= 'A' && letter <= 'Z')
    {
        printf("Entered character is Upper case");
    }
    else
    {
        printf("Enetered wrong charcter");
    }
    return 0;
}

/*  enter the charcter to know if uppercase or lower: m
    Entered character is Lower case

    enter the charcter to know if uppercase or lower: G
    Entered character is Upper case     */

/* Q6- Write a program to find greatest of four numbers entered by the user.    */

#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter four value one by one for a,b, c and d: ");
    scanf("\n%d \n%d \n%d \n%d", &a, &b, &c, &d);
    int greatest = a;

    if (a > greatest)
    {
        greatest = a;
    }
    if (b > greatest) // we used if statement again and again else if will stops 
                      // checking other values if the one of its condtion is true 
                      // and show the recent value;
    {
        greatest = b;
    }
    if (c > greatest)
    {
        greatest = c;
    }
    if (d > greatest)
    {
        greatest = d;
    }

    printf("The gretest value among all is : %d", greatest);
    return 0;
}

/*  Enter four value one by one for a,b, c and d: 10
    20
    30
    40
    The gretest value among all is : 40                */

    #include <stdio.h>

int main(){
    int a = 4, b = 2, c = 116, d = 32;

    if (a > b && a > c && a > d) {
        printf("The greatest of all is %d", a);
    }
    else if (b > a && b > c && b > d) {
        printf("The greatest of all is %d", b);
    }
    else if (c > a && c > b && c > d) {
        printf("The greatest of all is %d", c);
    }
    else if (d > a && d > c && d > b) {
        printf("The greatest of all is %d", d);
    }

    return 0;
}

// The greatest of all is 116

