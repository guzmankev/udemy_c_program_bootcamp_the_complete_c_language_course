#include <stdio.h>

int main()
{
    /*Variable Declaration*/
    float width, height;

    printf("Enter the desired lenght of your rectangle: ");
    scanf("%f", &width);
    printf("Width: %f\n", width);
    printf("Enter the desired height of your rectangle: ");
    scanf("%f", &height);
    printf("Height: %f\n", height);
    printf("The perimeter of your desired rectangle is: %f\n", 2*(width+height));

    return 0;
}