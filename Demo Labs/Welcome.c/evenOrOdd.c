/*
Onawa Lanier
4.2.19
Even or Odd
*/
#include <stdio.h>

int evenOdd(int userInt);                               //Declare function

void main()
{
    int userInt;                                        //Declare int array and variables
    int num;

    printf("Enter an integer to be considered even or odd:  \n");
    scanf("%d", &userInt);                              //Prompt user for integer and scan
    num = evenOdd(userInt);                             //Call even function and send it int
    if(num == 1)
    {
        printf("%d is even\n", userInt);                //If holder variable is 1, print variable is even
    }
    else
    {
        printf("%d is odd\n", userInt);
    }
} //end of main

int evenOdd(int userInt)                                //Define even function
{
    if(userInt % 2 == 0)                                //If int %2 = 0, return 1, else return 0
    {
        return 1;
    }
    else
    {
        return 0;
    }
}






