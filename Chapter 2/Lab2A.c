/*Declares four variables values and sizes
* Name: Onawa Lanier
* Date: 29 Jan 2019
* Project: Lab A 
*/

#include <stdio.h>

int main(void)
{
    int myInt = 9;
    float myFloat = 18;
    double myDouble = 27;
    char myChar = '!';

    printf("Your integer is %d and the size of int is %d \n", myInt, sizeof(myInt));
    printf("Your float is %f and the size of float is %d \n", myFloat, sizeof(myFloat));
    printf("Your double is %lf and the size of the double is %d \n", myDouble, sizeof(myDouble));
    printf("Your char is %c and the size of the char is %d \n", myChar, sizeof(myChar));

    return 0;
}