// File
// how we can create a file and call the txt file.
// reading file and printing data of file.
#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("nayan.txt", "r");
    // "r" is for read mode.
    int num;

    if(ptr==NULL){
            printf("the value doesnt exist");
    }else{
    fscanf(ptr, "%d", &num);
    printf("the value of num is %d \n", num);

    fscanf(ptr, "%d", &num);
    printf("the value of num is %d \n", num);
    }
      fclose(ptr);
      // fclose used to close the file "nayan" it wont show error or nayan.txt is in use whiel deleting.
    return 0;
}
/*  the value of num is 20 
    the value of num is 25  */

//  Write mode of a file or update txt file with some data or modification.
#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("nayan.txt", "w");
    // write mode cleares the all previous values first.
    int num = 400;  
    //value of num is 400
    fprintf(fptr,"%d", num);
    // put 400 or num inside the file fptr or "nayan.txt"
    // this will delete all previous already stored data and save 400 in nayan.txt
    
    fclose(fptr);
    // this will close the nayan.txt file
    return 0;
}

//  use of append mode "a"
#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("nayan.txt", "a");
    // append will enter the data in the last.
    int num = 400;  
    //value of num is 400
    fprintf(fptr,"%d", num);
    
    fclose(fptr);
    // this will close the nayan.txt file
    return 0;
}
/*  previous txt in nayan.txt is = the value of num is :
    code will modify in first run = the value of num is : 400
    code will modify in second run = the value of num is : 400400
    and then keep storing same thing again and again after every run.  */

    //      reading character by character.
#include <stdio.h>
int main()
{
    char ch;
    FILE *ptr;
    ptr = fopen("nayan.txt", "r");
    // opens file nayan.txt
    while (1)
    {
        ch = fgetc(ptr);
        // ch is equal to everycharacter of file.
        printf("%c", ch);
        // prints character one by one in every loop repeatation
        if (ch == EOF)
        // if file is ended then run if and break teh loop.
        {
            break;
        }
    }
    return 0;
}

