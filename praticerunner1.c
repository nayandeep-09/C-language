// swap function for a and b with call by value.
#include <stdio.h>
int swap(int a, int b){
    int c = a;
    a=b;
    b=c;
    return 0;
}
int main(){
    int a= 10;
    int b= 20;

    swap(a, b);
    printf("a is: %d\nb is: %d\n",a,b);
    return 0;
}



#include <stdio.h>
int swap(int *a, int *b){
    int c = *a;
    *a=*b;
    *b=c;
    return 0;
}
int main(){
    int a= 10;
    int b= 20;

    swap(&a, &b);
    printf("a is: %d\nb is: %d\n",a,b);
    return 0;
}