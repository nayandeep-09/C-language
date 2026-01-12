// Declaring strings using pointer.

// strlen();
// how we can print the length of string with strlen() and #include <string.h>
#include <stdio.h>
#include <string.h>

int main(){
    char str[]="nayan";
    int strlnth= strlen(str);
    printf("lengthof string is : %d",strlnth );
    return 0;
}
//  lengthof string is : 5

// strcpy();
#include <stdio.h>
int main(){
    char st []= "Nayan";
    char str[10];
    // new declared string.
    strcpy(str, st);
    // This copied the st [] into str [].
    printf("Here it prints new copied string str: %s and this is original st : %s", str, st);
return 0;
}
//  Here it prints new copied string str: Nayan and this is original st : Nayan

// strcat ();
// strcat add second term in 1st term.
#include <stdio.h>
#include<string.h>

int main(){
    char st1[]= "Nayan";
    char st2[30]= "Nayandeep";
    char st3[30]= " chouhan";

    strcat(st2, st3);
    // adds in st1 Nayandeep +  chouhan and keeps st3 as chouhan
    printf("%s %s",st2, st3);

    return 0;
}
// Nayandeep chouhan  chouhan

// strcmp()
/*IN int a = strcmp("nayan","deep"); id the second term 1st alphabet 
ascii is greater than 1st term 1st alphabet then it will print the 
positive value id the ascii for 1st term 1st alphbate is before the 
2nd term 1st alphabet then it will print negative value of 1.*/

#include <stdio.h>
#include<string.h>

int main(){
    char st2[30]= "Nayandeep";
    char st3[30]= "chouhan";

int a = strcmp("nayan","deep");
printf("%d",a);
    return 0;
} 
// 1
#include <stdio.h>
#include<string.h>

int main(){
    char st2[30]= "Nayandeep";
    char st3[30]= "chouhan";

int a = strcmp("deep","nayan");
printf("%d",a);
    return 0;
} 
// -1