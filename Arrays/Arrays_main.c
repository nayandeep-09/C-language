//  Arrays-
#include <stdio.h>

int main(){
    int max[50];
    max[0]=20;
max[1]=32;
max[2]=2;
max[3]=23;
max[4]=65;
max[5]=24;
max[6]=87;
max[7]=26;
printf("value of 2nd block is %d",max[2]);
    return 0;
}
// value of 2nd block is 2

//With input from user
#include <stdio.h>

int main(){
    int max[50];
    printf("Enter marks for block 1: ");
    scanf("%d",&max[1]);

printf("value of 1st block is %d",max[1]);
    return 0;
}
/*      Enter marks for block 1: 44
        value of 1st block is 44        */

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
        printf("value of %d block is %d\n",i, max[i]);
        // repeatedly prints output 5 times
    }
    
    return 0;
}
/*          Enter marks for blocks : 10
            30
            10
            20
            30
            value of 0 block is 10
            value of 1 block is 30
            value of 2 block is 10
            value of 3 block is 20
            value of 4 block is 30
            value of 1st block is 30            */

     // Initialization_way_in_array

#include <stdio.h>

int main(){
    int max[8]= {5,6,7,8,1,2,3,4}; //   int max[8] can work also
    for(int i = 0; i < 8; i++)
    {
        printf("The value of block %d is %d\n",i, max[i]);
    }
    
    return 0;
}

/*  The value of block 0 is 5 
    The value of block 1 is 6
    The value of block 2 is 7
    The value of block 3 is 8
    The value of block 4 is 1
    The value of block 5 is 2
    The value of block 6 is 3
    The value of block 7 is 4   */

// Two dimentional method to store arrays.

