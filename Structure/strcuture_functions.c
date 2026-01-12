// Structure passing the functions.

#include <stdio.h>
#include <string.h>

struct employee
{
    int empcode;
    float empsalary;
    char empname[20];
};

void show(struct employee emp){ // mention the name main heading like emp not emp1 which is subheading.
    printf("%d, %s, %.2f", emp.empcode, emp.empname, emp.empsalary);
}
// structure passing the function.  

int main()
{
    struct employee emp1;

    emp1.empcode = 401;
    strcpy(emp1.empname, "nayan");
    emp1.empsalary = 520.20;

    show(emp1);   // pass the structure

    return 0;
}


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
    v3i is 30 and v3j is 30 */

