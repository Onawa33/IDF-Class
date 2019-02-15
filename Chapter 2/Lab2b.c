/* Declares and initializes four variables data types, then casts and prints
* Name: Onawa Lanier
* Date: 29 Jan 2019
* Project: LabB
*/
#include<stdio.h>

int main(void)
{
    int myInt = 42;
    float myFloat = 42.42;
    double myDouble = 4.2424242424242;
    char myChar = 'A';

    printf("Your int: %d cast to a float: %f. \n", myInt, (float) myInt);
    printf("Your int: %d cast to a char: %c. \n", myInt, (char) myInt);
    printf("Your float: %f cast to a double: %lf. \n", myFloat, (double) myFloat);
    printf("Your double: %lf cast to a float: %f. \n", myDouble, (float) myDouble);
    printf("Your char: %c cast to an int: %d. \n", myChar, (int) myChar);
    printf("A cast to a char %c. \n", (char) 33);

    return 0;
}

