// While loop -
#include <stdio.h>

int main()
{
    int n = 1;                      // Value assigned 1 to n
    while (n < 5)
    {                               // condition is when n or 1 is greater less than 5 than perform below task under while..
        printf("\nStill n is less than 5 and now value was : %d", n);
                                    // n was 1 and 1 is less than 5 so printed the written text.
        n = n + 1;                  // this contion increased the n with 1 so 1+1=2 so n=2 for next 2 nd step
    }                               // this process will gets repeated untill the while condition will be false.
    return 0;                       // at the 5th time when n is 5 then condtion will be false and it will stop because the 5 is not greater than 5.
}

/*  #include <stdio.h>

    Still n is less than 5 and now value was : 1
    Still n is less than 5 and now value was : 2
    Still n is less than 5 and now value was : 3
    Still n is less than 5 and now value was : 4    */

#include <stdio.h>

int main()
{
    int i = 0;                  // i is 0
    while (i < 10)
    {                           // when i is less then 10 print below statement.
        printf("the value of i is %d\n", i);
                                // with pirnting also mention the current value of i
        i++;                    // lastly increase the value by 1, i with ++ used to increase value by 1.
    }                           // Now i increase and become 1.
    return 0;
}

/*  the value of i is 0
    the value of i is 1
    the value of i is 2
    the value of i is 3
    the value of i is 4
    the value of i is 5
    the value of i is 6
    the value of i is 7
    the value of i is 8
    the value of i is 9 */

    