//Onawa Lanier
//11Feb2019
//Continue

/*
    Input an unsigned integer "x".
    Print the first 10 to 20 positive integers that x is divisible by utilizing the mod operator (not the most efficient)
    Repeat this process.
    Immediately stop this process when the user inputs an integer above 999.
    Ignore any "divide by 0" errors using continue.
*/
#include <stdio.h>

int main()
{
    unsigned int x = 0; //unsigned int for user input
    int y = 0; //
    int divisor = 0;
    printf("Gimme a positive number between 1 and 998, please: \n");
    scanf("%i", &x);

    
        if(x >= 999) //checks for input above 999 or 0
            {
             printf("Gimme a smaller number than that, under 999. Make sure it isn't 0.\n");
             //break;
            }
        else 
        {
            for(divisor = 1; divisor <= x; divisor++) //loop to run input through starting at 1, so we don't divide by zero, and runs so long as the divisor is less than x
            {
                if (x==0) //checks for input = 0
                {   
                    ++x; //increments it to 1
                    continue; //moves onto the rest of the loop
                }
                if((x%divisor) == 0 && y < 10) //makes sure x is divisible without a remainder and prints first 10 divisors
                {
                    printf("%d\n", divisor); //prints the divisor only if there is no remainder
                    y++; //increments y up to 10 outputs (i.e. x%1, x%2,...x%10)
                }
                else if (y>=10)
                {
                    break; //stops after 10 iterations of output
                }
            }
        }
         printf("\n");
    return 0;
}
