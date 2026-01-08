/* Q1-   Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points
to the third element where ptr is a pointer pointing to the first element of the
array.*/
#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    //values start from address 0 so 3 comes at 2nd one.
    int *add = &arr;
    printf("the value at address %u is %d\n",add,*add);
    printf("At adress 2nd %u value is: %d\n", add+2, *add+2);
    // we can do *add = &arr; its stores the address of arr[0].
    // if we do arr+1 then goes to next address from max[0]-> max[1];
    return 0;
}

/*      the value at address 6422280 is 1
        At adress 2nd 6422288 value is: 3       */

/*  2. If S[3] is a 1-D array of integers then *(S+3) refers to the third element:
    (i) True.
    (ii) False.
    (iii) Depends.  */
Ans - false
#include <stdio.h>
int main()
{
    int s[] = {1, 2, 3, 4, 5};
    //values start from address 0 so 3 comes at 2nd one.
    int *add = &s;
    printf("the value of now %u is %d\n",add,*add);
    printf("aftrer adding 3 at address %u value is %d\n",add+3,*add+3);
    return 0;
}
/*  the value of now 6422280 is 1
    aftrer adding 3 at address 6422292 value is 4   */

/*Q3. Write a program to create an array of 10 integers and store multiplication table of
5 in it.*/

#include <stdio.h>

int main(){
    int max[10];
    int n = 5;
    for(int i = 0; i <= 10; i++ ){
            max[i]=n*(i+1);
    }
    for (int i = 0 ; i<10; i++){
    printf("%d\n",max[i]);
    }
    return 0;
}

/*  5
    10
    15
    20
    25
    30
    35
    40
    45
    50      */

/*Q4 - Repeat problem 3 for a general input provided 
        by the user using scanf.*/    

#include <stdio.h>

int main(){
    int max[10];
    int n;

printf("Enter the desired table printing value: ");
scanf("%d",&n);
    for(int i = 0; i <= 10; i++ ){
            max[i]=n*(i+1);
    }
    for (int i = 0 ; i<10; i++){
    printf("%d\n",max[i]);
    }
    return 0;
}

/*      Enter the desired table printing value: 7
        7
        14
        21
        28
        35
        42
        49
        56
        63
        70      */

/*Q5. Write a program containing a function which reverses 
        the array passed to it. */        
   #include <stdio.h>
int swap(int arr[], int n){
    for (int i = 0; i < n/2; i++)
    {
        int temp = arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1] = temp;
    }
     
}
int main(){
     int arr[6]={1,2,3,4,5,6};
     swap(arr, 6);
     for (int i = 0; i < 6; i++)
     {
        printf("%d", arr[i]);
     }
     
    return 0;
}

//  654321

/*Q6 - Write a program containing functions which counts 
        the number of positive integers in an array.*/

     #include <stdio.h>
int count(int arr[], int n)
{
    int even = 0;

    for (int i = 0; i < 6; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
    }
    printf("%d", even);
}
int main()
{
    int arr[6] = {1, 2, 5, 9, 8, 4};
    count(arr, 6);
    return 0;
}

//  3

/*  Q7. Create an array of size 3 x 10 containing multiplication 
tables of the numbers 2,7 and 9 respectively  */

#include <stdio.h>

int main(){
    int table[3][10];
    int value[3]= {2,7,9};//created changable value array

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 10; j++)
        {
            table[i][j]= value[i]*(j+1);
        }      
    
        }
    printf("For table[3][10] for are : {{%d, %d, %d, %d, %d, %d, %d, %d, %d, %d}\n{%d, %d, %d, %d, %d, %d, %d, %d, %d, %d}\n{%d, %d, %d, %d, %d, %d, %d, %d, %d, %d}}",table[0][0],table[0][1],table[0][2],table[0][3],table[0][4],table[0][5],table[0][6],table[0][7],table[0][8],table[0][9],table[1][0],table[1][1],table[1][2],table[1][3],table[1][4],table[1][5],table[1][6],table[1][7],table[1][8],table[1][9],table[2][0],table[2][1],table[2][2],table[2][3],table[2][4],table[2][5],table[2][6],table[2][7],table[2][8],table[2][9]);

        return 0;
}

/*      For table[3][10] for are : {{2, 4, 6, 8, 10, 12, 14, 16, 18, 20}
        {7, 14, 21, 28, 35, 42, 49, 56, 63, 70}
        {9, 18, 27, 36, 45, 54, 63, 72, 81, 90}}        */

// 8. Repeat problem 7 for a custom input given by the user.

        #include <stdio.h>

int main(){
    int table[3][10];
    int value[3];//created changable value array
    
for (int k = 0; k < 3; k++)
{
    printf("Enter 3 values to print table: ");
    scanf("%d", &value[k]);
}



    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 10; j++)
        {
            table[i][j]= value[i]*(j+1);
        }      
    
        }
    printf("For table[3][10] for are : {{%d, %d, %d, %d, %d, %d, %d, %d, %d, %d}\n{%d, %d, %d, %d, %d, %d, %d, %d, %d, %d}\n{%d, %d, %d, %d, %d, %d, %d, %d, %d, %d}}",table[0][0],table[0][1],table[0][2],table[0][3],table[0][4],table[0][5],table[0][6],table[0][7],table[0][8],table[0][9],table[1][0],table[1][1],table[1][2],table[1][3],table[1][4],table[1][5],table[1][6],table[1][7],table[1][8],table[1][9],table[2][0],table[2][1],table[2][2],table[2][3],table[2][4],table[2][5],table[2][6],table[2][7],table[2][8],table[2][9]);

        return 0;
}

/*      Enter 3 values to print table: 2
        Enter 3 values to print table: 3
        Enter 3 values to print table: 4
        For table[3][10] for are : {{2, 4, 6, 8, 10, 12, 14, 16, 18, 20}
        {3, 6, 9, 12, 15, 18, 21, 24, 27, 30}
        {4, 8, 12, 16, 20, 24, 28, 32, 36, 40}}     */

/*  9. Create a three–dimensional array and print the address of its elements in
    increasing order    */
    #include <stdio.h>

int main(){
    int arr[2][3][4];
    for (int i = 0; i < 2 ; i++){
        for (int j = 0; j < 3; j++){
            for (int h = 0; h < 4; h++)
            {
                printf("%d\n",&arr[i][j][h]);
            }
            
        }
        
        }
    
    return 0;
}

/*  6422196
    6422200
    6422204
    6422208
    6422212
    6422216
    6422220
    6422224
    6422228
    6422232
    6422236
    6422240
    6422244
    6422248
    6422252
    6422256
    6422260
    6422264
    6422268
    6422272
    6422276
    6422280
    6422284 
    6422288         */
    