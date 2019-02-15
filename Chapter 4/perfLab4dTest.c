#include "stdio.h"
/*Lucas Marchesani
4Feb19
Lab4D.c*/
int main ()
{
    
    //these are the number variables
    int firstNumber = 0;
    int secondNumber = 0;
    int endResult = 0;

    

    //prompts users for integers
    printf("Please input your two integers seperated by an *: ");
    scanf("%d%*c%d", &firstNumber, &secondNumber);
    //stores the result of #1 & #2 being multiplied in a variable i can call later
    endResult = firstNumber * secondNumber;
    //calls all and prints
    printf("The result of %d multiplied by %d is %d \n", firstNumber, secondNumber, endResult);

    return 0;
}