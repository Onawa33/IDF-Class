//Onawa Lanier
//Feb2019
//perfLab4.5 Nested Control Flow

/*NESTED CONTROL FLOW

    Print all the even or odd numbers from 0 to 100.
    Prompt the user for input to indicate odds or evens.
    Loop from 0 to 100 and print all indicated numbers.
    Use and IF statement to check if even or odd.

BONUS: Ask the user to continue with a DO-WHILE loop

* write a version with the counting loop written as a FOR loop, and a WHILE loop version.
*/
#include <stdio.h>

int main()
{
    int userInput = 0; //for storing user input

    printf("Input a '1' for Even numbers, a '0' for Odd numbers\n"); //asks for user input
    scanf("%i", &userInput); //scans and stores input

    for(int i = 1; i < 101; i++)
{
    if(userInput == 1 && i%2 == 0) //checks that user wants an even number and gets all #s cleanly divisible by 2
    {
        printf("Even numbers:  %i\n", i);
    }
    else if(userInput == 0 && i%2 != 0) //otherwise user chose odds, and gets all #s with a remainder after dividing by 2
    {
        printf("Odd numbers:  %i\n", i);
    }
}
return 0;
}
