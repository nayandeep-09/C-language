
//       Integer address increment.

            #include <stdio.h>

            int main(){
                int a = 10;
                int *b = &a;

                printf("The address of a is %i\n",&a);
                printf("The address of b is %u\n",b);
                b++;    
                //it increase the address by 4bytes for integer.
                // for character it will increased by 1 only.
                // for float it also varied and increases.
                printf("The address of b is %u\n",b);


                return 0;
            }

/*  The address of a is 6422296
    The address of b is 6422296
    The address of b is 6422300     */

//       Character address increment.
                #include <stdio.h>

            int main(){
                char a = 'a';
                char *b = &a;

                printf("the address of a is %i\n",&a);
                printf("The address of b is %u\n",b);
                b++;    
                //it increase the address by 4bytes for integer.
                // for character it will increased by 1 only.
                // for float it also varied and increases.
                printf("The address of b is %u\n",b);


                return 0;
            }

/*  the address of a is 6422299
    The address of b is 6422299
    The address of b is 6422300 */

//       Float address increment.
            #include <stdio.h>

            int main(){
                float a = 21.85;
                float *b = &a;

                printf("the address of a is %u\n",&a);
                printf("The address of b is %u\n",b);
                b++;    
                // for float it increased by 4 bytes too
                printf("The address of b is %u\n",b);


                return 0;
            }

/*      the address of a is 6422296
        The address of b is 6422296
        The address of b is 6422300     */

//          loop with the arithemtic pointer and array.
                    #include <stdio.h>

            int main(){
                int max[50];
                printf("Enter marks for blocks : ");
                for (int i=0; i < 5; i++){
                scanf("%d",&max[i]);
                // repeatedly asks for input 5 times
                }
                for (int i = 0; i<5 ; i++)
                {
                    printf("value of %d block is %d\n",i, &max[i]);
                    // prints the address of max[i] and increases the address by 4 byte
                }
                
                return 0;
            }

            /*          Enter marks for blocks : 10
                        20
                        30
                        40
                        50
                        value of 0 block is 6422096
                        value of 1 block is 6422100
                        value of 2 block is 6422104
                        value of 3 block is 6422108
                        value of 4 block is 6422112     */

#include <stdio.h>

int main(){
    int max[] = {12,11,54,85};
    int *pointer = max; //max = max[0] they both are same and we can use each instead of othher basically works same.
    
    for (int i = 0; i < 4; i++)
    {
        printf("Print the value of %d is %d\n", i, max[i]);
    }
    
    return 0;
}

/*      Print the value of 0 is 12
        Print the value of 1 is 11
        Print the value of 2 is 54
        Print the value of 3 is 85    */

        #include <stdio.h>

int main(){
    int max[] = {12,11,54,85};
    int *pointer = max; //max = max[0] they both are same and we can use each instead of othher basically works same.
    
    for (int i = 0; i < 4; i++)
    {
        printf("Print the value of %d is %d\n", i, max[i]);
        printf("Print the value %d\n",*pointer);
        //*pointer have the value of max[0]
        printf("Print the value %u\n",pointer);
        //prints Address of the pointer
        pointer++;
        // increase the 4 byte in address of pointer or max[0] or 12 value 
    }
    
    return 0;
}

/*      Print the value of 0 is 12
        Print the value 12
        Print the value 6422280
        Print the value of 1 is 11
        Print the value 11
        Print the value 6422284
        Print the value of 2 is 54
        Print the value 54
        Print the value 6422288
        Print the value of 3 is 85
        Print the value 85
        Print the value 6422292     */


// Function of passing arrays call by reference.

##include <stdio.h>
int pass(int *ptr){
    // receives the address of pointer or max[0]
    *ptr = *ptr + 1;
    // ptr stores the value of the max[0] or pointer value and adds 1 and saves it in memoory.
    return 0;
}
int main(){
    int max[] = {12,11,54,85};
    int *pointer = &max;
    // pointer stores the address of max[0]
    pass(pointer);
    // pointer passes the address in function
    printf("value is now %d",*pointer);
    //prints the value of new addressed value in addredd of *pointer
    return 0;
}

//      value is now 13.

#include <stdio.h>

int main() {
    int arr[3][2] = {
        {1, 4},
        {7, 9},
        {11, 22}
    };

    // Outer loop → rows
    for (int i = 0; i < 3; i++) {
        // Inner loop → columns
        for (int j = 0; j < 2; j++) {
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }

    return 0;
}
/*      arr[0][0] = 1
        arr[0][1] = 4
        arr[1][0] = 7
        arr[1][1] = 9
        arr[2][0] = 11
        arr[2][1] = 22      */

// 2_D Arrays        
//Create a 2-d array by taking input from the user. Write a display function to
//print the content of this 2-d array on the screen.
    #include <stdio.h>

int main(){
    int max[3][2];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter block %d value %d\n:", i,j);
            scanf("%d",&max[i][j]);
        }
        
    }
    printf("For max[3][2] values are : {{%d,%d},{%d,%d},{%d,%d}}",max[0][0],max[0][1],max[1][0],max[1][1],max[2][0],max[2][1]);
    
    return 0;
}

/*          Enter block 0 value 0
            :1
            Enter block 0 value 1
            :4
            Enter block 1 value 0
            :7
            Enter block 1 value 1
            :9
            Enter block 2 value 0
            :11
            Enter block 2 value 1
            :22
            For max[3][2] values are : {{1,4},{7,9},{11,22}}                 */

            