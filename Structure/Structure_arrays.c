#include <stdio.h>
#include <string.h>

struct employee
{    int code;
    char name[20];
    float salary;
};

int main(){
    struct employee arr[200];
    // stored emaployee details in an array and stored array in a structure.
    arr[0].code = 401;
    arr[1].code = 402;
    strcpy(arr[2].name, "nayan");
    arr[3].salary =5000.20;
    
    printf("%d\n", arr[0].code);
    printf("%d\n", arr[1].code);
    printf("%s\n", arr[2].name);
    printf("%.2f\n", arr[3].salary);

    return 0;
}

/*  401
    402
    nayan
    5000.20 */

    #include <stdio.h>
#include <string.h>

struct employee
{   int code;
    char name[20];
    float salary;
};

int main(){
    struct employee emp1 = {403, "nayandeep", 6747.98};
        // we store details as per predefined above code,name,salary.
    printf("%d \n%s \n%.2f", emp1.code,emp1.name, emp1.salary);

    return 0;
}
/*  403 
    nayandeep
    6747.98 */
 


/*  storage are varies as per datatype
    int with 4 byte stored in 450
    float stored in 454
    char stored in 455 and owns 1 byte  */