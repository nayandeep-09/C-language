// We can use the ‘typedef’ keyword to create an personal name for data types in C.
// ‘typedef’ is more commonly used with structures.

#include <stdio.h>

int main(){
    typedef int nayan;
    // nayan defined as integer.
    nayan a = 1;
    // nayan working in the form of integer.
    nayan b = 20;
    // nayan basically replaced the int keyword.
    // doesn't mean int wont work int will also works same.

    printf("%d %d",a,b);
    return 0;
}
// 1 20

// we can use typedef in strcture as below mentioned.
#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int empcode;
    float empsalary;
    char empname[20];
}Emp; 

int main()
{
    Emp emp1, emp2;
    // used Emp as "struct employee emp1, emp2" with the helpof typedef
    emp1.empcode = 401;
    strcpy(emp1.empname, "nayan");
    emp1.empsalary = 520.20;

    printf("%d, %s, %f", emp1.empcode, emp1.empname, emp1.empsalary);
    return 0;
}
// 401, nayan, 520.200012

// we can use it like this too.
#include <stdio.h>
#include <string.h>

struct employee
{
    int empcode;
    float empsalary;
    char empname[20];
}Emp; 

int main()
{
    typedef struct employee Emp;
    // used Emp as "struct employee emp1, emp2" with the help of typedef used Emp last word.
    
    Emp emp1, emp2;
    emp1.empcode = 401;
    strcpy(emp1.empname, "nayan");
    emp1.empsalary = 520.20;

    printf("%d, %s, %f", emp1.empcode, emp1.empname, emp1.empsalary);
    return 0;
}

//  With the help of pointer.
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
    typedef struct employee Emp;
    Emp *ptr;
    // used emp typedef to use the pointer.
    Emp e1;
    // pointer storing the address of employee.
    e1.code = 401;
    ptr = &e1;
    printf("%d\n", (*ptr).code);

    printf("%d\n", ptr->code);
    // we can use the pointer printing liek this too with dash - and greater than > symbol.
    
    return 0;
}