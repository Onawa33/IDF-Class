//Onawa Lanier
//8Feb2019
//perfLab7.2b
//practice bitwise and if/else statements


 /*   Initialize a signed int to 0.
    Input a number from the user and store it in the signed int.
    Determine if the number is negative or positive utilizing a bitwise operator.
    Utilizing an IF-ELSE statement:
        INDICATE if the number is negative
        Otherwise, print the original value in binary, and use a bitwise operation to flip one bit to make it negative
    Print the binary*/


#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    signed int userInput = 0;
    int bitCheck = 0x01;

    bitCheck = bitCheck << 31; //moves the position to the first

    printf("Gimme a number:   \n");
    scanf("%i", &userInput);

    //check to see if number is negative using 2's complement
    if (userInput & bitCheck > 0)
    {
        printf("That number is already negative though. Try a positive number. \n");    //IF neg, ask for new number
    }
    else //IF positive, convert to negative and print it in binary
    {
        printf("You entered positive number:  %i\n Here's that number in binary:  \n", userInput);

        while (bitCheck > 0) //prints the positive binary of the original number using a while loop
        {
            if ((userInput & bitCheck) > 0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
            bitCheck = bitCheck >> 1; //shifts the checker one spot to the right for iteration
        }
        printf("Here's that number as a negative:  \n");

        bitCheck = 0x01; //resets bitCheck to 1
        bitCheck = bitCheck << 31; //shifts the bitCheck all the way left
        userInput = userInput | bitCheck; //OR statement changes userInput to a negative

        while (bitCheck > 0)
        {
            if ((userInput & bitCheck) > 0)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
            bitCheck = bitCheck >> 1; //shifts the checker one spot to the right for iteration
        }
    }

    return 0;

}