//  STRINGS

#include <stdio.h>

int main(){
    char str[] = "nayan";
    //  we can also store string as {'n','a','y','a','n'} or "nayan"
    
    for (int i = 0; i <= 5; i++)
    // the i = 5 will print the null character
    {
        printf("character is %c\n", str[i]);
    }
    
    return 0;
}
/*  character is n
    character is a
    character is y
    character is a
    character is n
    character is        */

#include <stdio.h>

int main(){
    char str[] = "nayan";
    
    for (int i = 0; i <= 5; i++)
    {
        printf("%c", str[i]);
    }
    
    return 0;
}

//  nayan

#include <stdio.h>

int main(){
    char str[] = "nayan";
    
    printf("%s",str);
    // we can use %s to print strings and the variable 
    //name of string *str* to print anything.
    
    return 0;
}
//  nayan


// Gets(); and fgets();
// we should use fgets instead gets because its gives error unusual sometimes and buffers mostly.
#include <stdio.h>

int main(){
    char strings[100];
    gets(strings);
// takes input inside the metioned strings without scanf
    printf("%s",strings);
    return 0;
}
/*      nayandeep       <--took input from me and printed same below
        nayandeep       */

// Puts();
#include <stdio.h>

int main()
{
    char str[100];
    gets(str); // takes input.
    puts(str); // prints same input given above.
    printf("Hello");
    return 0;
}
/*      hii nayan
        hii nayan
        Hello       */

        //Diff between puts() and printf
 #include <stdio.h>

int main()
{
    char str[100];
    gets(str); // takes input.
    printf("%s",str);
    printf("Hello");
    return 0;
}
/*      nayan
        nayanHello      */