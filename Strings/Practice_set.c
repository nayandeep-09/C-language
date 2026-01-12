/*Q1. Which of the following is used to appropriately read a multi-word string. 
1. gets() 
2. puts() 
3. printf() 
4. scanf() */
answer - gets();

/*Q2. Write a program to take string as an input from the user using %c and %s confirm 
that the strings are equal. */
#include <stdio.h>

int main(){
    char str[6];
    for (int i = 0; i < 5; i++)

    {
        scanf("%s", &str[i]);
        fflush(stdin);
        //this used to ignore 'enter' as character and wont store enter hitting as a character.
    }
    str[5]= '\0';
    // this will stoare the 5th block as null.

    printf("%s", str);
    return 0;
}
/*  n
    a
    y
    a
    n
    nayan   */

/*Q3. Write your own version of strlen function from <string.h> */
// own created fucntion which workds like strlen().
#include <stdio.h>
//below function will calculate the length of the string.
char strlen(char str[]){
    int i=0, count;
    char c = str[i];
    while(c  != '\0'){
        c = str[i];
        i++;
    }
            count = i-1;
    return count;
}


int main(){
    char str[] = "Nayandeep";
    
    printf("%d", strlen(str));
    // function will print the length of the str[].
    return 0;
}
// 9

/*Q4. Write a function slice() to slice a string. It should change the original string such 
that it is now the sliced string. Take ‘m’ and ‘n’ as the start and ending position 
for slice. */
#include <stdio.h>

char* slice(char str[],int a, int b){
    char *str1=&str[a];
    char *str2=&str[b];
    
    str = str1;
    str[b]= '\0';

    return str;
}
int main(){
    char str[]="nayandeep chouhan";
    
    printf("%s",slice(str, 0 ,5)); 
    // prints the word from block 0 to block 5;

    return 0;
}
//nayan

// Q5. Write your own version of strcpy function from <string.h>
#include <stdio.h>

void mystrcpy(char *target, char *source){
 while (*source!='\0'){
    *target = *source;
    source++;
    target++;
 }    
 *target = '\0';
}

int main(){
    char st[]= "Nayan";
    char str[10];
    

    mystrcpy(str, st);
    printf("%s",str );
return 0;
}
// Nayan

/*Q6. Write a program to encrypt a string by adding 1 to the ascii value of its
characters.*/
//with function
#include <stdio.h>

void encrypt(char str[]){
    for(int i = 0; i<5; i++){
        str[i] = str[i]+1;
    }
}

int main(){
    char str[]= "nayan";
    encrypt(str); // cant use inside printf because in fucntion we used the void.
    printf("%s",str);
    return 0;
}

//without function simple
#include <stdio.h>

int main(){
    char str[]= "nayan";
    for(int i = 0; i<5; i++){
        str[i] = str[i]+1;
    }
    printf("%s",str);
    return 0;
}
//same output: obzbo

/*Q7. Write a program to decrypt the string encrypted using encrypt function in
problem 6.*/
// Simple version to decrypt.
#include <stdio.h>

int main(){
    char str[]= "obzbo";
    for(int i = 0; i<5; i++){
        str[i] = str[i]-1;
    }
    printf("%s",str);
    return 0;
}

// function to decrypt.
#include <stdio.h>

void decrypt(char str[]){
    for(int i = 0; i<5; i++){
        str[i] = str[i]-1;
    }
}

int main(){
    char str[]= "obzbo";
    decrypt(str); // cant use inside printf because in fucntion we used the void.
    printf("%s",str);
    return 0;
}

//same output: nayan

//Q8. Write a program to count the occurrence of a given character in a string.

#include <stdio.h>

int main()
{
    char str[] = "nayan";
    char ch;
    int count = 0;

    printf("Enter the character to check the occurance: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }
    printf("the character occurance of %c is %d times in the word/letter %s",ch, count, str);

    return 0;
}
/*Enter the character to check the occurance: y
the character occurance of y is 1 times in the word/letter nayan*/

/*Q9. Write a program to check whether a given character is present in a string or not.*/

#include <stdio.h>

int main()
{
    char str[] = "nayan";
    char ch;
    int count = 0;

    printf("Enter the character to check the availablity: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }

    if (count >= 1)
    {
        printf("given character ''%c is in the letter ''%s''", ch, str);
    }
    else
    {
        printf("given character ''%c'' is not available in the letter ''%s''", ch, str);
    }

    return 0;
}
/*      Enter the character to check the availablity: z
        given character ''z'' is not available in the letter ''nayan''

        Enter the character to check the availablity: a
        given character a is in the letter ''nayan''            */