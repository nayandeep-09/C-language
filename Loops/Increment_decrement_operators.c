// Increament operator: ++ with i++ and ++i
#include <stdio.h>

int main(){
    int i = 5;
    printf("The value of i is %d \n", i);   
        // the value of given i is 5 which will be printed.
    printf("Now the value of i is incresing %d \n", i++);
        // the value of given i will be printed then after it will increased by 1.
    printf("Now the value of i is incresed %d \n", i);
    
    return 0;
}

/*  The value of i is 5 
    Now the value of i is incresing 5 
    Now the value of i is incresing 6 
 */

#include <stdio.h>

int main(){
    int i = 5;
    printf("The value of i is %d \n", i);   
        // the value of given i is 5 which will be printed.
    printf("Now the value of i is incresing %d \n", ++i);
        // the value of given i will be increase then it will be printed.
    printf("Now the value of i is incresed %d \n", i);
    
    return 0;
}

/*  The value of i is 5 
    Now the value of i is incresing 6 
    Now the value of i is incresed 6  */

// Decrement Operator: -- with i-- and --i

 #include <stdio.h>
 
     int main(){
    int i = 5;
    printf("The value of i is %d \n", i);   
        // the value of given i is 5 which will be printed.
    printf("Now the value of i is decreasing %d \n", i--);
        // the value of given i will be printed then it will be decreased.
    printf("Now the value of i is decreased %d \n", i);
    
    return 0;
}

/*  The value of i is 5 
    Now the value of i is incresing 5 
    Now the value of i is incresed 4        */

     #include <stdio.h>
 
     int main(){
    int i = 5;
    printf("The value of i is %d \n", i);   
        // the value of given i is 5 which will be printed.
    printf("Now the value of i is decreased %d \n", --i);
        // the value of given i will be decreased then it will be printed.
    printf("Now the value of i is decreased %d \n", i);
    
    return 0;
}

/*  The value of i is 5 
    Now the value of i is incresing 4 
    Now the value of i is incresed 4    */

     #include <stdio.h>
 
     int main(){
    int i = 5;
    printf("The value of i is %d \n", i);   
    printf("Now the value of i is incresing %d \n", --i);
    printf("Now the value of i is decreased %d \n", i);
    
    i+=2;   // basically adds 2 only in current value of i
            // works like i = i + 2;
        printf("Now the value of i is %d \n", i);
    return 0;
}

/*      The value of i is 5 
        Now the value of i is incresing 4 
        Now the value of i is decreased 4
        Now the value of i is 6             */

 #include <stdio.h>
 
     int main(){
    int i = 5;
    printf("The value of i is %d \n", i);   
    printf("Now the value of i is incresing %d \n", --i);
    printf("Now the value of i is decreased %d \n", i);
    
    i-=2;       //  basically less 2 only from the current value of i
                // works like i = i - 2;
        printf("Now the value of i is %d \n", i);
    return 0;
}

/*      The value of i is 5 
        Now the value of i is incresing 4 
        Now the value of i is decreased 4
        Now the value of i is 6             */

/*
    i += 2 equal as i = i + 2 adds two in value of i
    i -= 2 equal as i = i - 2 lesses two in value of i
    i *= 2 equal as i = i * 2 multiplies 2 in value of i
    i /= 2 equal as i = i / 2 devided 2 from the value of i
    i %= 2 equal as i = i % 2 modulous
    i <<= 2 equal as i = i << 2 shifts value left side
    i >>= 2 equal as i = i >> 2 shifts value right side
    i &= 2 equal as i = i & 2 
    i ^= 2 equal as i = i ^ 2
    i |= 2 equal as i = i | 2
*/
