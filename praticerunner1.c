#include <stdio.h>
int tenx(int i){
  i=  i * 10;   
 return i; 
}

int main(){
    int a = 10;
    
    printf("The 10x of value a is %d and value of a is still %d",tenx(a),a);
    return 0;
}