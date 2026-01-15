#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int player, computer = rand() %3;
    
    printf("Enter the number between 0 for water 1 for gun and 2 for snake: \n");
    scanf("%d", &player);

    printf("Computer chosen: %d\n", computer);

    if (player == computer)
    {
        printf("it's tie");
    } else if(player == 0 && computer == 1){
        printf("You won congratulations!");
    } else if(player == 1 && computer == 0){
        printf("computer wins");
    } else if(player == 1 && computer == 2){
        printf("You won congratulations!");
    }else if(player == 2 && computer == 1){
        printf("computer wins");
    }else if(player == 2 && computer == 0){
        printf("You won congratulations!");
    }else if(player == 0 && computer == 2){
        printf("computer wins");
    }else{
        printf("something wrong choose between (0,1 and 2)");
    }
    return 0;
}