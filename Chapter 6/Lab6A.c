//Onawa Lanier
//7Feb2019
//Lab6A

/* Input a uint32_t userInput from stdin utilizing fscanf()
    Initialize another uint32_t bitChecker to 0x01
    Use a Bitwise Shift Left on bitChecker to ensure only the left most bit is turned on
    Print the binary representation of userInput to stdout using only the following:
        fprintf()
        Bitwise Shift Right >>
        Bitwise AND &
        Relational Operator (e.g., >)*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <inttypes.h>
#include <math.h>

int main(void)
{
    uint32_t userInput = 0; //initializes an unsigned 32bit int
    uint32_t bitChecker = 0x01; //set bitChecker to one

    fprintf(stdout, "Input a positive number to convert to binary:  "); 
    fscanf(stdin, "Your input is %u", &userInput); 

    bitChecker = bitChecker << 31; //moves the bitChecker to left most value

    while (bitChecker > 0) //iterates through user input checking for 1s and 0s, prints them
    {
        if (userInput & bitChecker == 0)
        {
            fprintf(stdout, "0");
        }
        else
        {
            fprintf(stdout, "1");
        }
        bitChecker= bitChecker >> 1; //moves bitChecker to the right one space for iteration, until it rolls over to the front at 0
    }

    return 0;
}