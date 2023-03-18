/*The c program gets: 1) Current year of the user and 2) Age of the user. The C program then calculates year
of birth of the user. 

#include <stdio.h>

int main()
{
    /*Variable Declaration*/
    int year;
    int age;

    /*printf and scanf functions were both used to achieve this task*/
    printf("Enter the current year followed by your age: \n");
    scanf(" %d", &year);
    printf("Year: %d\n", year);
    scanf(" %d", &age);
    printf("Age: %d\n", age);
    printf("You were born in the Year: %d\n", year-age);

    return 0;
}