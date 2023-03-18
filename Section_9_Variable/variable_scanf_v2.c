/*This c program receives two "double numbers" from the user. 1) Rectangle Height and 2) Rectangle Width. The c program
calculates and prints the AREA of the given rectangle*/
#include <stdio.h>

int main()
{
    /*Variable Decalration*/
    double height;
    double width;

    printf("Enter the Height for your desire rectangle: ");
    scanf("%lf", &height);
    printf("Height: %lf\n", height);
    printf("Enter the Width for your desire rectangle: ");
    scanf("%lf", &width);
    printf("Width: %lf\n\n", width);

    printf("The area of your desire rectangle is %lf\n", height*width);

    return 0;
    
}
