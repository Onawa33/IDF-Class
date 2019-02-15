
   /* Input a uint32_t
    Drop the four right-most bits off the uint32_t by shifting right four
    Replace the four left-most bits of the uint32_t with the dropped bits
    Print the I/O in uppercase Hex, width 8, leading zeros

//////// SAMPLE EXECUTION #1 ////////
Input a number: 31337
Your number was: 0x00007a69
Your number now: 0x900007a6
//////// SAMPLE EXECUTION #2 ////////
Input a number: 987654321
Your number was: 0x3ADE68B1
Your number now: 0x13ADE68B

NOTE: In hex, the last digit becomes the first digit */
//Onawa Lanier
//7Feb2019
//Bitwise Demo Lab

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <inttypes.h>


int main(void)
{
    uint32_t inputNum = 0; //a 32 bit unsigned int variable initialized to 0
    uint32_t transitionNum = 0; //second uint32_t variable for holding the lost bits frmo the end
    printf("Input a positive number:   ");
    //_flushall(); //Writes the contents of all buffers associated with open output streams to appropriate files. 
    //All buffers associated with input streams are cleared of their current contents
    scanf("%u", &inputNum);//reads in from stdin, %u is an unsigned decimal int

    printf("Your number was %u (Hex: 0x%08X) \n", inputNum, inputNum);
    //The Hex:0x prints to hex %8X and makes the position 8 bits displayed.

    transitionNum = inputNum & 0x0000000F;//take user input and copy to transition for later use AND mask four of the binary bits (done by F)

    inputNum = inputNum >>4; //shifts input to the right 4 positions and replaces new in old variable

    transitionNum = transitionNum << ((sizeof(transitionNum) *8)-4);
    //takes the size of the transitionsNum which is a 4 bit int. Since we are working with the uint32_t which returns bits not bites, we muiltiply by 8 (so 32). 
    //Then move back the 4 bits we lost so 32-4 = 28. 

    inputNum = inputNum | transitionNum; 

    printf("Your new number is %u (Hex:0x%08X) \n", inputNum, inputNum);

    return 0;


}