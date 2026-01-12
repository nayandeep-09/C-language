// Pointer to structure or how we can use the pointers in structure.

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