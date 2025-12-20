//Practise set-1
//Q1- find the user weight by asking user height and width
#include <stdio.h>

int main()
{
    int height;
    int width;
    printf("Enter the height : ");
    //asks enter the height : "here use enter number"

    scanf("%d", &height);
    //asks input from the user

    printf("Enter the width : ");
    //asks enter the width : "here use enter number"

    scanf("%d", &width);
    printf("The weight should be : %d", height * width);
    return 0;
}

/*
Enter the height : 10 
Enter the width : 5
The weight should be : 50
*/