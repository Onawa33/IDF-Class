//Onawa Lanier
//7Feb2019
//DemoLab7.2c
//Purpose: Practice if/else statements

/*SWAP THE LARGEST NUMBER

    Initialize ONLY three unsigned int variables to 0.
    Safely scan user input into the variable #1 and #2 utilizing a single line.
    Using a single ELSE-IF statement:
        If variable #1 is equal to variable #2, print an ERROR.
        Otherwise, exchange the value of the largest variable with variable #3 while preserving the other value.
    Print the values of all three variables if the SUM of the three variables is greater than 2 regardless of the previous ELSE-IF statement.
*/

#include <math.h>
#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    uint32_t varIchi = 0;
    uint32_t varNi = 0;
    uint32_t varSan = 0;

    printf("Give me two integers:  \n");
    scanf("%d%d", &varIchi, &varNi);

    if (varIchi == varNi)
    {
        printf("NI! They can't be the same numba! \n");
    }
    else if (varIchi > varNi)
    {
        varSan = varIchi;
    }
    else 
    {
         varSan = varNi;
    }

    if ((varIchi + varNi + varSan) > 2)
    {
        printf("Your first is: %d\n Your second is: %d\n Your third is: %d\n The sum is: %d\n", varIchi, varNi, varSan,(varIchi+varNi+varSan));
    }
    return 0;
}