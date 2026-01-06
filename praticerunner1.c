#include <stdio.h>

int main(){
    int max[3][2];
    for(int i =0; i < 3; i++){
        printf("Enter the first column %d row: ",i);
        scanf("%d",&max[i]);
        for (int j = 0; j < 2; j++)
        {
            printf("Enter the second column %d row: ",j);
            scanf("%d",&max[j]);
        }
    }
    return 0;
}

//again from 7:00:00