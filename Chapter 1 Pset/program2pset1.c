//Q2- Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.
#include <stdio.h>

int main(){
    int radius;
    printf ("Please enter the radius: ");
    scanf("%d", &radius);
    printf ("the area of cirlce is : %.2f", 3.14 * radius * radius);
    return 0;
}

/*
Please enter the radius: 5
the area of cirlce is : 78.500000
*/

#include<stdio.h>
int main()
{
    int radius;
    int height;
    printf("Please enter the radius: ");
    scanf("%d", &radius);
    printf("Enter the height : ");
    scanf("%d", &height);
    // Just added height input and formula to πr2h
    printf("the area of cirlce is : %.2f", 3.14 * radius * radius);
    printf("\nVolume of cyliner is : %.2f", 3.14 * radius * radius * height);
    return 0;
}

/*
Please enter the radius: 10
Enter the height : 5
the area of cirlce is : 314.00
Volume of cyliner is : 1570.00
*/