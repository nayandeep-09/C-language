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