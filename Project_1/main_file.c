#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int min = 1;
    int max = 100;
    int r;

    srand(time(0)); // seed for randomness

    r = rand() % (max - min + 1) + min;
    

    int i;        
    printf("Guess the number:  ");
    while (r <= 100 && r >= 1){
    scanf("%d", &i);
        
        if (i < r)
        {
            printf("Guess a larger one: \n");
        }
        else if (i > r)
        {
            printf("Guess a smaller one: \n");
        }
        else if (i == r)
        {
            printf("Guessed the %d correct number congratulations", r);
            break;
        }
        else
        {
            printf("number error");
        }
    }

    return 0;
}
