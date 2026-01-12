//  Structure--
/*we can store different types of data types in a single structure.*/

#include <stdio.h>
#include <string.h>

struct employee
{
    int empcode;
    float empsalary;
    char empname[20];
}; // semicolon is important to end the structure.

int main()
{
    struct employee emp1, emp2;
    emp1.empcode = 401;
    strcpy(emp1.empname, "nayan");
    // we can not import the string directly so have to use strcpy to copy given name in the empname.
    emp1.empsalary = 520.20;

    printf("%d, %s, %f", emp1.empcode, emp1.empname, emp1.empsalary);
    return 0;
}

// 401, nayan, 520.200012

/*Quick Quiz: Write a program to store the details of 3 employees from user defined data.
Use the structure declared above.       */

#include <stdio.h>
#include <string.h>

struct employee
{
    int empcode;
    float empsalary;
    char empname[20];
}; // semicolon is important to end the structure.

int main()
{
    struct employee emp1, emp2;

    printf("enter the employee code: ");
    scanf("%d", &emp1.empcode);
    printf("enter the employee name: ");
    scanf("%s", &emp1.empname);
    printf("enter the employee salary: ");
    scanf("%f", &emp1.empsalary);

    printf("enter the 2nd employee code: ");
    scanf("%d", &emp2.empcode);
    printf("enter the 2nd employee name: ");
    scanf("%s", &emp2.empname);
    printf("enter the 2nd employee salary: ");
    scanf("%f", &emp2.empsalary);

    printf("%d, %s, %.2f\n", emp1.empcode, emp1.empname, emp1.empsalary);
    printf("%d, %s, %.2f\n", emp2.empcode, emp2.empname, emp2.empsalary);

    return 0;
}
/*      enter the employee code: 401
        enter the employee name: nayan
        enter the employee salary: 54.35
        enter the 2nd employee code: 402
        enter the 2nd employee name: rahul
        enter the 2nd employee salary: 54.33
        401, nayan, 54.35
        402, rahul, 54.33       */


