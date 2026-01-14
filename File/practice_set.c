/*  Q1. Write a program to read three integers from a file.  */
#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("nayan.txt", "r");
    int num;

    fscanf(ptr, "%d", &num);
    // takes input from txt file the first integer.
    printf("%d", num);

    fscanf(ptr, "%d", &num);
    // takes input from txt file the second integer.
    printf("%d", num);

    fscanf(ptr, "%d", &num);
    // takes input from txt file the third integer.
    printf("%d", num);
    return 0;
}

/*Q2. Write a program to generate multiplication table of a given number in text 
format. Make sure that the file is readable and well formatted. */
#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("q2table.txt", "w");
    int num = 5;
    for (int i = 1; i <= 10; i++)
    {
        fprintf(ptr,"%d * %d = %d\n",num, i, num*i);
    }

    return 0;
}
// table of 5 saved in q2table.txt

/*Q3. Write a program to read a text file character by character and write its content 
twice in separate file. */

#include <stdio.h>
int main()
{
    char ch;
    FILE *ptr, *fptr;
    ptr = fopen("nayan.txt", "r");
    fptr = fopen("q3char.txt", "w");
    // opens file nayan.txt
    while (1)
    {
        ch = fgetc(ptr);
        fprintf(fptr, "%c", ch);
        fprintf(fptr, "%c", ch);

        if (ch == EOF)
        {
            break;
        }
    }
    
    return 0;
}

/*  Q4. Take name and salary of two employees as input from the user and write them to 
    a text file in the following format: 
    i. Name1, 3300 
    ii. Name2, 7700 */
    
    #include <stdio.h>
int main()
{
    char ch;
    FILE *fptr;
    fptr = fopen("q4.txt", "w");
    char name[50], name2[50];
    int salary, salary2;

    printf("\nEnter your name: ");
    scanf("%s", &name);
    printf("\nEnter your salary: ");
    scanf("%d", &salary);
    printf("\nEnter your name: ");
    scanf("%s", &name2);
    printf("\nEnter your salary: ");
    scanf("%d", &salary2);


        fprintf(fptr, "name is : %s || his salary is: %d\n", name, salary);
        fprintf(fptr, "name is : %s || his salary is: %d\n", name2, salary2);

    return 0;
}

/*Q5. Write a program to modify a file containing an integer to double its value. */

#include <stdio.h>
int main()
{
    char ch;
    FILE *ptr, *fptr;
    int num;
    ptr = fopen("q5.txt", "r");
    fscanf(ptr, "%d", &num);
    fclose(ptr);
    
    fptr = fopen("q5.txt", "w");
    
    fprintf(fptr, "%d",num*2);

    return 0;
}
