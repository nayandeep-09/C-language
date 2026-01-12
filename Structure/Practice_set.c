/*Q1. Create a two-dimensional vector using structures in C.    */

#include <stdio.h>
struct vector{
    int i,j;
};


int main(){
    struct vector v = {10,20};

    printf("the value of vector i is %d and j is %d", v.i,v.j);

    return 0;
}

// the value of vector i is 10 and j is 20

/*  Q.2- Write a function ‘sumVector’ which returns the sum of two vectors passed to it.
    The vectors must be two–dimensional.      */

#include <stdio.h>
struct vector{
    int i,j;
};
struct vector sumvector(struct vector v1, struct vector v2){
    struct vector v3 = {v1.i + v2.i, v1.j + v2.j};
    return v3;
}

// fucntion takes input of two types and performs addition then 


int main(){
    struct vector v1 = {10,20};
    struct vector v2 = {20,10};
    struct vector v3 = sumvector(v1, v2);


printf("the value of vector v1i is %d and v1j is %d \nv2i is %d and v2j is %d \nv3i is %d and v3j is %d", v1.i,v1.j,v2.i,v2.j,v3.i,v3.j);

    return 0;
}
/*  the value of vector v1i is 10 and v1j is 20
    v2i is 20 and v2j is 10
    v3i is 30 and v3j is 30     */

/*  Q3- Twenty integers are to be stored in memory. What will you prefer- Array or
    structure?  */

/* we will use the array because the structure is used when the data is in mutliple 
forms not only in integer, basically structure used when data is in unmanaged form*/

/*Q4. Write a program to illustrate the use of arrow operator → in C.*/

#include <stdio.h>
#include <string.h>

struct employee
{
    int code;
    char name[20];
    float salary;
};

int main()
{
    struct employee e1;
    struct employee *ptr;
    // pointer storing the address of employee.
    e1.code = 401;
    ptr = &e1;
    printf("%d\n", (*ptr).code);

    printf("%d\n", ptr->code);
    // we can use the pointer printing liek this too with dash - and greater than > symbol.
    
    return 0;
}
/*      401
        401     */

/*Q5. Write a program with a structure representing a complex number.*/

#include <stdio.h>
struct complex{
    int real;
    int imaginary;
};


int main(){
    struct complex i = {2,3};

    printf("complex number is %d and imaginary is %di\n", i.real, i.imaginary);
    return 0;
}
// complex number is 2 and imaginary is 3i

/*Q6. Create an array of 5 complex numbers created in Problem 5 and display them
with the help of a display function. The values must be taken as an input from
the user.*/

#include <stdio.h>
typedef struct complex{
    int real;
    int imaginary;
}c;

int main(){
    c arr[5];

    for (int i=0; i < 5 ; i++){
        printf("Enter the real number: ");
        scanf("%d", &arr[i].real);
        printf("Enter the imaginary number: ");
        scanf("%d", &arr[i].imaginary);
        printf("the real nuber is %d and imaginary is %di \n",arr[i].real,arr[i].imaginary);
    }    
    return 0;
}

/*  Enter the real number: 1
    Enter the imaginary number: 2
    the real nuber is 1 and imaginary is 2i 
    Enter the real number: 3
    Enter the imaginary number: 4
    the real nuber is 3 and imaginary is 4i 
    Enter the real number: 5
    Enter the imaginary number: 6
    the real nuber is 5 and imaginary is 6i 
    Enter the real number: 7
    Enter the imaginary number: 8
    the real nuber is 7 and imaginary is 8i 
    Enter the real number: 9
    Enter the imaginary number: 10
    the real nuber is 9 and imaginary is 10i */

/*Q7. Write problem 5’s structure using ‘typedef’ keywords.*/
#include <stdio.h>
typedef struct complex{
    int real;
    int imaginary;
}c;


int main(){
    c complex = {2,3};

    printf("complex number is %d and imaginary is %di\n", complex.real, complex.imaginary);
    return 0;
}

// complex number is 2 and imaginary is 3i

/*Q8. Create a structure representing a bank account of a customer. What fields did
you use and why?*/

#include <stdio.h>
typedef struct bankaccount
{
    int accno;
    char name[20];
    char bankname[50];
    char acctype[10];
    float deposit;
    float age;
}acc;

int main(){
    acc details= {2154121, "nayan", "SBI", "Savings", 100.50, 20.00};

        printf("%d %s %s %s %.2f %.2f",details.accno, details.name, details.bankname ,details.acctype ,details.deposit, details.age);
    return 0;
}

// 2154121 nayan SBI Savings 100.50 20.00

/*9. Write a structure capable of storing date. Write a 
function to compare those dates.*/

#include <stdio.h>
struct datecomp
{
    int date;
    int month;
    int year;
};

int compare(struct datecomp d1, struct datecomp d2){
    if(d1.year == d2.year && d1.month == d2.month && d1.date == d2.date){
        return 0;
    }else if(d1.year > d2.year){
        return 1;
    }else if(d1.month > d2.month){
        return 1;
    }else if (d1.date > d2.date){
        return 1;
    }else {
        return -1;
    }
}

int main(){
    struct datecomp d1 = {12, 01 , 2026};
    struct datecomp d2 = {11, 01 , 2026};

printf("%d", compare(d1,d2));
    return 0;
}
// 1

/*Q10. Solve problem 9 for time using ‘typedef’ keyword.*/

#include <stdio.h>
typedef struct datecomp
{
    int date;
    int month;
    int year;
}comp;

int compare(comp d1, comp d2){
    if(d1.year == d2.year && d1.month == d2.month && d1.date == d2.date){
        return 0;
    }else if(d1.year > d2.year){
        return 1;
    }else if(d1.month > d2.month){
        return 1;
    }else if (d1.date > d2.date){
        return 1;
    }else {
        return -1;
    }
}

int main(){
    comp d1 = {12, 01 , 2026};
    comp d2 = {11, 01 , 2026};

printf("%d", compare(d1,d2));
    return 0;
}
// 1