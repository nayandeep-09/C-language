#include <stdio.h>
int main()
{
    char ch;
    FILE *ptr, *fptr;
    int num;
    ptr = fopen("q5.txt", "r");
    fscanf(ptr, "%d", &num);
    fclose(ptr);
    
    fptr = fopen("q5.txt", "w");
    
    fprintf(fptr, "%d",num*2);

    return 0;
}
